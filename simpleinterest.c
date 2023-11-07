// C Program to calculate simple interest and the final amount in the account...

#include <stdio.h>
int main()
{
    int principle_amt, year;
    float roi, si, final_amt;
    
    printf("Enter the principal amount : ");
    scanf("%d", &principle_amt);
    
    printf("Enter the number of years : ");
    scanf("%d", &year);
    
    printf("Enter the rate of interest : ");
    scanf("%f", &roi);
    
    si = (principle_amt * year * roi) / 100;
    printf("\nSimple Interest is = %.2f", si);
    
    final_amt = principle_amt + si;
    printf("\nAmount to withdraw : %.2f", final_amt);
    
    return 0;
}
