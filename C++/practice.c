/**
 * The program is a restaurant billing system that allows users to generate, save, and search invoices
 * for customers.
 * 
 * @param name The name of the customer for whom the invoice is being generated.
 * @param date The date of the order/invoice. It is automatically generated using the __DATE__ macro in
 * C.
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// A struct can be thought of as a template or a blueprint for creating variables
// that have the same structure or organization of data.

struct items{
    char item[20];
    float price;
    int qty;
};

struct orders{
    char customer[50];
    char date[50];
    int numOfItems;
    struct items itm[50];
};
//functions to generate biils
/**
 * The function generates a bill header with the customer's name and date.
 * 
 * @param name a string variable that represents the name of the customer or person to whom the bill is
 * being generated.
 * @param date a string variable that represents the date of the bill
 */
void generateBillHeader(char name[50],char date[30]){
    printf("\n\n");
        printf("\t    ADV. Restaurant");
        printf("\n\t   -----------------");
        printf("\nDate:%s",date);
        printf("\nInvoice To: %s",name);
        printf("\n");
        printf("---------------------------------------\n");
        printf("Items\t\t");
        printf("Qty\t\t");
        printf("Total\t\t");
        printf("\n---------------------------------------");
        printf("\n\n");
}
/**
 * The function generates a bill body by printing the item name, quantity, and total price.
 * 
 * @param item a string variable that represents the name of an item being purchased.
 * @param qty qty stands for quantity, which is the number of items purchased.
 * @param price The price of one unit of the item.
 */
void generateBillBody(char item[30],int qty, float price){
    printf("%s\t\t",item); 
        printf("%d\t\t",qty); 
        printf("%.2f\t\t",qty * price); 
        printf("\n");
}
/**
 * The function generates a bill footer with sub-total, discount, net total, CGST, SGST, and grand
 * total.
 * 
 * @param total the total amount of the bill before any discounts or taxes are applied.
 */
void generateBillFooter(float total){
   /* This code block is generating the bill footer with sub-total, discount, net total, CGST, SGST,
   and grand total. It calculates the discount as 10% of the total, the net total as the total minus
   the discount, the CGST as 9% of the net total, and the grand total as the net total plus twice
   the CGST. It then prints out the bill footer with all the calculated values formatted to two
   decimal places using the "%.2f" format specifier. */
    printf("\n");
    float dis = 0.1*total;
    float netTotal=total-dis;
    float cgst=0.09*netTotal,grandTotal=netTotal + 2*cgst;//netTotal + cgst + sgst
    printf("---------------------------------------\n");
    printf("Sub Total\t\t\t%.2f",total);
    printf("\nDiscount @10%s\t\t\t%.2f","%",dis);
    printf("\n\t\t\t\t-------");
    printf("\nNet Total\t\t\t%.2f",netTotal);
    printf("\nCGST @9%s\t\t\t%.2f","%",cgst);
    printf("\nSGST @9%s\t\t\t%.2f","%",cgst);
    printf("\n---------------------------------------");
    printf("\nGrand Total\t\t\t%.2f",grandTotal);
    printf("\n---------------------------------------\n");
}
/**
 * This is a program for a restaurant that allows the user to generate, save, and search invoices for
 * customers.
 * 
 * @return The main function is returning an integer value of 0.
 */
int main(){
    
    /* These are variable declarations in the main function. */
    int opt,n;
    struct orders ord;
    struct orders order;
    char saveBill = 'y',contFlag = 'y';
    char name[50];
    FILE *fp;
       //dashboard
    /* The code block is creating a loop that will continue to execute as long as the value of the
    variable `contFlag` is equal to the character 'y'. Within the loop, the code initializes the
    variables `total` and `invoiceFound` to 0, displays a menu of options for the user to choose
    from, prompts the user to enter their choice, and reads the input using `scanf()`. The
    `fgetc(stdin)` function is used to clear the input buffer before reading the user's input. */
    while(contFlag == 'y'){
    float total = 0;
    int invoiceFound = 0;
    printf("\t============SUPERVOID RESTAURANT============");
    printf("\n\nPlease select your prefered operation");
    printf("\n\n1.Generate Invoice");
    printf("\n2.Show all Invoices");
    printf("\n3.Search Invoice");
    printf("\n4.Exit");

    printf("\n\nYour choice:\t");
    scanf("%d",&opt);
    fgetc(stdin);
    switch(opt){
        /* `case 1` is a switch case that is executed when the user selects the option to generate an
        invoice. It prompts the user to enter the name of the customer, the number of items being
        purchased, and the details of each item (name, quantity, and unit price). It then calculates
        the total amount of the bill and generates the bill header, body, and footer using the
        `generateBillHeader()`, `generateBillBody()`, and `generateBillFooter()` functions
        respectively. Finally, it prompts the user to save the invoice and if the user chooses to
        save it, the invoice details are written to a file named "RestaurantBill.dat" using the
        `fwrite()` function. */
        case 1:

        printf("\nPlease enter the name of the customer:\t");
        fgets(ord.customer,50,stdin);
        ord.customer[strlen(ord.customer)-1] = 0;
        strcpy(ord.date,__DATE__);
        printf("\nPlease enter the number of items:\t");
        scanf("%d",&n);
        ord.numOfItems = n;
        for(int i=0;i<n;i++){
            fgetc(stdin);
            printf("\n\n");
            printf("Please enter the item %d:\t",i+1);
            fgets(ord.itm[i].item,20,stdin);
            ord.itm[i].item[strlen(ord.itm[i].item)-1]=0;
            printf("Please enter the quantity:\t");
            scanf("%d",&ord.itm[i].qty);
            printf("Please enter the unit price:\t");
            scanf("%f",&ord.itm[i].price);
            total += ord.itm[i].qty * ord.itm[i].price;
        }

        generateBillHeader(ord.customer,ord.date);
        for(int i=0;i<ord.numOfItems;i++){
            generateBillBody(ord.itm[i].item,ord.itm[i].qty,ord.itm[i].price);
        }
        generateBillFooter(total);

        printf("\nDo you want to save the invoice [y/n]:\t");
        scanf("%s",&saveBill);

        if(saveBill == 'y'){
            fp = fopen("RestaurantBill.dat","a+");
            fwrite(&ord,sizeof(struct orders),1,fp);
            if(fwrite != 0)
            printf("\nSuccessfully saved");
            else 
            printf("\nError saving");
            fclose(fp);
        }
        break;

        /* `case 2` is a switch case that is executed when the user selects the option to show all
        invoices. It opens the file "RestaurantBill.dat" in read mode using the `fopen()` function
        and reads the contents of the file using the `fread()` function. It then generates the bill
        header, body, and footer for each invoice using the `generateBillHeader()`,
        `generateBillBody()`, and `generateBillFooter()` functions respectively. Finally, it closes
        the file using the `fclose()` function. */
        case 2:

        fp = fopen("RestaurantBill.dat","r");
        printf("\n  *****Your Previous Invoices*****\n");
        while(fread(&order,sizeof(struct orders),1,fp)){
            float tot = 0;
            generateBillHeader(order.customer,order.date);
            printf("%d,%d",name,order);
            for(int i=0;i<order.numOfItems;i++){
                generateBillBody(order.itm[i].item,order.itm[i].qty,order.itm[i].price);
                total+=order.itm[i].qty * order.itm[i].price;
            }
            generateBillFooter(tot);
        }
        fclose(fp);
        break;

        /* `case 3` is a switch case that is executed when the user selects the option to search for a
        specific invoice. It prompts the user to enter the name of the customer for whom the invoice
        is being searched. It then opens the file "RestaurantBill.dat" in read mode using the
        `fopen()` function and reads the contents of the file using the `fread()` function. It
        compares the name entered by the user with the name of each customer in the file using the
        `strcmp()` function. If a match is found, it generates the bill header, body, and footer for
        that invoice using the `generateBillHeader()`, `generateBillBody()`, and
        `generateBillFooter()` functions respectively. Finally, it sets the `invoiceFound` flag to 1
        and closes the file using the `fclose()` function. If no match is found, it prints a message
        indicating that the invoice for the specified customer does not exist. */
        case 3:
        printf("Enter the name of the customer:\t");
        fgetc(stdin);
        fgets(name,50,stdin);
        name[strlen(name)-1] = 0;
        // system("cls");
        fp = fopen("RestaurantBill.dat","r");
        printf("\t*****Invoice of %s*****",name);
        while(fread(&order,sizeof(struct orders),1,fp)){
            float tot = 0;
            if(!strcmp(order.customer,name)){
            generateBillHeader(order.customer,order.date);
            for(int i=0;i<order.numOfItems;i++){
                generateBillBody(order.itm[i].item,order.itm[i].qty,order.itm[i].price);
                tot+=order.itm[i].qty * order.itm[i].price;
            }
            generateBillFooter(tot);
            invoiceFound = 1;
            }
        
        }
        if(!invoiceFound){
            printf("Sorry the invoice for %s doesnot exists",name);
        }
        fclose(fp);
        break;

    /* `case 4` is a switch case that is executed when the user selects the option to exit the program.
    It prints a goodbye message, terminates the program using the `exit()` function, and returns an
    integer value of 0. The `default` case is executed when the user enters an invalid option, and
    it prints a message indicating that the option is invalid. The program then prompts the user to
    perform another operation by setting the value of `contFlag` to 'y'. Finally, the program prints
    a goodbye message and returns an integer value of 0. */
    case 4:
    printf("\n\t\t Bye Bye :)\n\n");
    exit(0);
    break;

    default:
    printf("Sorry invalid option");
    break;
    }
    printf("\nDo you want to perform another operation?[y/n]:\t");
    scanf("%s",&contFlag);
    }
    printf("\n\t\t Bye Bye :)\n\n");
    printf("\n\n");

    return 0;
}