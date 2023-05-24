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

/**
 * The struct "orders" contains information about a customer's order, including their name, date of
 * order, and the number and details of items ordered.
 * @property {char} customer - A character array that stores the name of the customer who placed the
 * order.
 * @property {char} date - The "date" property is a character array of size 50 that is a member of the
 * "orders" struct. It is likely used to store the date of the order.
 * @property {int} num_of_items - num_of_items is an integer variable that represents the number of
 * items in an order.
 * @property itm - `itm` is a member of the `orders` struct and is an array of `items` structs. It can
 * hold up to 50 `items` structs.
 */
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
   
/**
 * The function generates a bill body by printing the item name, quantity, and total price.
 * 
 * @param item A string variable that represents the name of the item being purchased.
 * @param quantity The quantity of the item being purchased.
 * @param price The price of one unit of the item.
 */
void generate_Bill_Body( char item[30],int quantity, float price){
    printf("%s \t \t" , item);
    printf("%d \t \t", quantity);
    printf( " % .2f \t \t", quantity*price );
    printf("\n");
}
 
/*
 * The function generates a bill footer with discount, net total, GST, and grand total.
 * 
 * @param total The total cost of all the items in the bill.
 */
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
    /* The `while` loop is used to repeatedly display a menu of options to the user and prompt them to
    select an operation to perform. The loop continues until the user enters 'n' when prompted to
    perform another operation. */
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
            /* The above code is a case in a switch statement that is executed when the user selects
            option 1. It prompts the user to enter the name of the customer and the details of the
            items they want to order, calculates the total cost of the order, generates a bill for
            the order using the `generate_Bill_Header()` and `generate_Bill_Body()` functions,
            prompts the user to save the invoice, and if the user chooses to save it, it saves the
            order details as an invoice in a binary file named "RestaurantBill.dat". */
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

            /* This code block is generating the header and body of a bill for a customer's order. The
            `generate_Bill_Header()` function is called with the customer's name and the current
            date as arguments to print the header of the bill. Then, a `for` loop is used to iterate
            over each item in the order, and for each item, the `generate_Bill_Body()` function is
            called with the item name, quantity, and price as arguments to print the details of the
            item on the bill. The total cost of the order is also calculated by multiplying the
            quantity and price of each item and adding it to the `total` variable. */
            generate_Bill_Header(ord.customer,ord.date);
            for(int i=0;i<ord.num_of_items;i++){
                generate_Bill_Body(ord.itm[i].item,ord.itm[i].quantity,ord.itm[i].price);
                total+=order.itm[i].quantity*order.itm[i].price;
            }
            /* This code block is responsible for saving the current order as an invoice in a binary
            file named "RestaurantBill.dat". It prompts the user to enter whether they want to save
            the invoice or not, and if the user enters 'y', it opens the file in append mode using
            the `fopen()` function, writes the data of the current order to the file using the
            `fwrite()` function, and then closes the file using the `fclose()` function. If there is
            an error while writing to the file, it prints the message "Error saving" to the console. */
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
            /* This code block is responsible for displaying all the previous invoices that have been
            saved in the "RestaurantBill.dat" file. It opens the file in read mode, reads the data
            of each order using the `fread()` function, and then generates a bill for each order
            using the `generate_Bill_Header()`, `generate_Bill_Body()`, and `generate_Bill_Footer()`
            functions. Finally, it closes the file using the `fclose()` function. */
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

            /* This code block is responsible for searching for a specific invoice in the
            "RestaurantBill.dat" file based on the name of the customer. It prompts the user to
            enter the name of the customer, reads the data of each order using the `fread()`
            function, and then checks if the customer name matches the entered name using the
            `strcmp()` function. If a match is found, it generates a bill for that order using the
            `generate_Bill_Header()`, `generate_Bill_Body()`, and `generate_Bill_Footer()`
            functions. If no match is found, it prints a message saying that the invoice does not
            exist. Finally, it closes the file using the `fclose()` function. */
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
            /* This code block is responsible for terminating the program. It prints the message "Bye
            Bye" with some formatting, then calls the `exit()` function with a status code of 0 to
            terminate the program, and finally uses the `break` statement to exit the switch
            statement. */
            printf("\n\t\t Bye Bye : \n\n");
            exit(0);
            break;

            default:
            /* This code block is executed when the user enters an invalid option in the menu. It
            prints the message "Sorry invalid option" to the console and then uses the `break`
            statement to exit the switch statement and continue with the while loop. */
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
