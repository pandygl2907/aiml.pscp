// Operations of ATM using control structures... 
// Write a C Program to implement the operations of an ATM using control structures as Authentication, Deposit, Withdrawal, Balance Check, and Pin Change...

#include <stdio.h>
int main() 
{
    char acc_name[30];
    int acc_no, init_amt, pin, dep_amt, wit_amt, cur_amt, new_pin; 
    int ch; 
    
    printf("Enter the name of the Account Holder : ");
    scanf("%s", acc_name);
    
    printf("Enter the Account Number : ");
    scanf("%d", &acc_no);
    
    printf("Enter the Initial amount to deposit in the Account : ");
    scanf("%d", &init_amt);
    
    printf("Enter your PIN : ");
    scanf("%d", &pin);
    
    printf("\nChoices...\n0.Authentication.\n1.Amount Deposit.\n2.Amount Withdraw\n3.Balance Check\n4.PIN Change...");
    printf("\nEnter your Choice : ");
    scanf("%d", &ch);
    switch(ch)
    {
        case 0:
            printf("\nAuthentication for PIN...\n");
            if(pin == pin)
            {
                printf("\nValidation Succesful...");
            }
            break;    
        case 1:
            printf("\nAmount Deposit...\n");
            printf("\nEnter the amount to deposit : ");
            scanf("%d", &dep_amt);
            printf("%d Rupees deposited in your Account", dep_amt);
            cur_amt = init_amt + dep_amt;
            printf("\nYour Current Balance is : %d", cur_amt);
            break;    
        case 2:
            printf("\nAmount Withdrawal...\n");
            printf("\nEnter the amount to withdraw : ");
            scanf("%d", &wit_amt);
            if(wit_amt < init_amt)
            {
                cur_amt = init_amt - wit_amt;
                printf("%d Rupees Withdrawed from your Account", wit_amt);
                printf("\nYour Current Balance is : %d", cur_amt);
            }
            else
            {
                printf("\nNot possible to withdraw the mentioned amount from your account...");
            }
            break;    
        case 3:
            printf("\nBalance Checking...\n");
            printf("\nYour Current Balance is : %d", init_amt);
            break;    
        case 4:
            printf("\nPIN Change Request...\n");
            printf("\nEnter your Old PIN : ");
            scanf("%d", &pin);
            printf("\nEnter your Old PIN : ");
            scanf("%d", &new_pin);
            if(pin != new_pin)
            {
                printf("\nPIN change Successfully...");
            }
            else
            {
                printf("\nYour New PIN is not as same as your Old PIN. Please change it..");
            }

            break;    
        case 5:
            printf("\nPlease enter any valid choice...");
            break;    
    }
    
    return 0;
}
