#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct items   // A struct can be thought of as a template or a blueprint for creating variables
               // that have the same structure or organization of data.
{
    char item[20];
    float price;
    int quantity;
};

struct orders
{
    char customer[50];
    char date[50];
    int num_of_items;
    struct items itm[50];
};

// function to generate bills 
  
  // function for showing the name , date , invoice 
void generate_Bill_Header( char name[50],char date[30]){
    printf("\n \n");
    printf(" \t SUPERVOID RESTAURANT"); // name of restaurant 
    printf("\n \t ---------------------------");
    printf("\n Date : %s" , date);     // date 
    printf("\n Invoice To : %s" , name); // Invoice 
    printf("\n");
    printf("---------------------------\n");
    printf("Items \t \t ");             // Items
    printf( "Quantity \t \t");          // Quantity 
    printf( " Total \t \t ");           // total
    printf(" \n -----------------------------"); 
    printf(" \n \n");
}
    // function for taking no of item and calculating the item price
void generate_Bill_Body( char item[30],int quantity, float price){
    printf("%s \t \t" , item);
    printf("%d \t \t", quantity);
    printf( " % .2f \t \t", quantity*price );
    printf("\n");
}
 
 void generate_Bill_Footer(float total ){ // function for footer -- discount ,net total,GST,Grand Total
    printf("\n");
    float discount = 0.1 * total;
    float netTotal = total-discount;
    float cgst = 0.08 * netTotal , grandTotal=netTotal + 2*cgst; // grandtotal =netTotal + gst
    printf("-------------------------\n");
    printf(" sub Total \t \t %.2f", total);
    printf("\n Discount @10%s \t \t %.2f","%",discount);
    printf("\n\t\t\t\t ---------");
    printf("\n Net Total \t \t \t %.2f",netTotal);
    printf("\n CGST @8%s \t \t \t  %.2f","%",cgst);
    printf("\n SGST @8%s \t\t\t %.2f","%",cgst);
    printf("\n-------------------------------------");
    printf("\n Grand Total \t\t\t%.2f",grandTotal);
    printf("\n-----------------------------\n");
 }

int main(){
    int option,n;
    struct orders ord;
    struct orders order;
    char saveBill='y',coutFlag ='y';
    char name[50];
    FILE*fp;
    //dashboard
    while (coutFlag=='y'){
        system("cls");
        float total=0;
        int invoiceFound =0;
        printf("\t ============ SUPERVOID RESTAURANT============");
        printf("\n\n Please select you prefered operation");
        printf("\n\n 1.Generate Invoice");
        printf("\n 2.Show all invoices");
        printf("\n 3.Search Invoice ");
        printf("\n 4.Exit");

        printf("\n\n Your choice : \t");
        scanf("%d",&option);
        fgetc(stdin);
        
        switch (option){
            case 1:
            system("cls");
            printf("\n Please enter the name of the customer : \t ");
            fgets(ord.customer , 50,stdin);
            ord.customer[strlen(ord.customer)-1]=0;
            strcpy(ord.date,__DATE__);
            printf("\n Please enter the name of the items : \t");
            scanf("%d",&n);
            ord.num_of_items=n;
            for(int i=0;i<n;i++){
                fgetc(stdin);
                printf("\n\n");
                printf("Please enter the item %d : \t",i+1);
                fgets(ord.itm[i].item,20,stdin);
                ord.itm[i].item[strlen(ord.itm[i].item)-1]=0;
                printf("Please enter the quantity : \t");
                scanf("%d",&ord.itm[i].quantity);
                printf("Please enter the unit price :\t");
                scanf("%d",&ord.itm[i].price);
                total+=ord.itm[i].quantity*ord.itm[i].price;
            }

            generate_Bill_Header(ord.customer,ord.date);
            for(int i=0;i<ord.num_of_items;i++){
                generate_Bill_Body(ord.itm[i].item,ord.itm[i].quantity,ord.itm[i].price);
                total+=order.itm[i].quantity*order.itm[i].price;
            }
            generate_Bill_Footer(total);
            printf("\n Do you want to save the invoice [y/n] : \t");
            scanf("%s",&saveBill);

            if(saveBill=='y'){
                fp=fopen(" RestaurantBill.dat","a+");
                fwrite(&ord, sizeof(struct orders ),1,fp);
                if(fwrite !=0)printf("\n Error saving");
                fclose(fp);
            }
            break;
            case 2:
            system("cls");
            fp=fopen("RestaurantBill.dat","r");
            printf("\n ****** Your Previous Invoice ******\n");
            while(fread(&order,sizeof(struct orders),1,fp)){
                float total=0;
                generate_Bill_Header(order.customer,order.date);
                for(int i=0;i<order.num_of_items;i++){
                    generate_Bill_Body(order.itm[i].item,order.itm[i].quantity,order.itm[i].price);
                    total+=order.itm[i].quantity*order.itm[i].price;
                }
                generate_Bill_Footer(total);
            }
            fclose(fp);
            break;

            case 3:
            printf("Enter the name of the customer : \t");
            //fgetc(stdin);
            fgets(name,50,stdin);
            name[strlen(name)-1]=0;
            system("cls");
            fp=fopen("RestaurantBill.dat","r");
            printf("\t *****Invoice of %s*****",name);
            while (fread(&order,sizeof(struct orders),1,fp))
            {
                float total=0;
                if(!strcmp(order.customer,name)){
                    generate_Bill_Header(order.customer,order.date);
                    for(int i=0;i<order.num_of_items;i++){
                        generate_Bill_Body(order.itm[i].item,order.itm[i].quantity,order.itm[i].price);
                        total+=order.itm[i].quantity*order.itm[i].price;
                    }
                    generate_Bill_Footer(total);
                    invoiceFound=1;
                }
            }
            if(!invoiceFound){
                printf("Sorry invoice for %s does not exists",name);
            }
            fclose(fp);
            break;

            case 4:
            printf("\n\t\t Bye Bye : \n\n");
            exit(0);
            break;

            default:
            printf("Sorry invalid option");
            break;
        }
        printf("\n Do you want to perform another operation ? [y/n] : \t");
        scanf("%s",&coutFlag);
    }
   printf("\n\t\t Bye Bye : \n\n");
   printf("\n\n");
   return 0;
}
