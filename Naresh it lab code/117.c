#include <stdio.h>
int main() {
    int opt,n;
    float bill, amt,change;
    char ch;
    menu:
    printf("Welcome to our Tea Stall Counter! Our menu:");
    printf("\n1. Tea --------------------- Rs. 10\n2. Coffee ------------------ Rs. 20\n3. Cold coffee ------------- Rs. 50\n4.Exit\n");
    printf("Choose by entering a number (1-4):");
    scanf("%d",&opt);
    if(opt==1) {
        printf("How many cups of refreshing tea? : ");
        scanf("%d",&n);
        bill = 10*n;
        
    }else if(opt==2) {
         printf("How many cups of aromatic coffee? : ");
        scanf("%d",&n);
        bill = 20*n;
    }else if(opt==3) {
        printf("How many cups of chilled cold coffee? : ");
        scanf("%d",&n);
        bill = 50*n;
    }else if(opt==4) {
         printf("Thank you for visiting! We look forward to serving you again soon!");
        return 0;
    }else {
        printf("Invalid option..");
    }
    printf("Total for [%d] cup(s): Rs. [%.2f].\n",n,bill);//80
    pay:
    printf("Enter your payment amount: Rs. %.2f : ",bill);
    scanf("%f",&amt);//50
    if(amt>bill) {
    change =  amt - bill;
    printf("Change: Rs.[%.2f]\n",change);
    }else if(amt<bill) {
        bill-=amt;
        goto pay;
    }else {
        printf("Your bill is cleared...\n");
    }
    printf("Explore more or finalize? (Type 'Y' for Yes or 'N' for No): ");
    scanf(" %c",&ch);
    if(ch=='Y' || ch=='y'){
       printf("Certainly, let's explore.\n") ;
       goto menu;
    }else {
        printf("Thank you for visiting! We look forward to serving you again soon!");
    }
    return 0;
}