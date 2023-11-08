// C Program to Check Whether a Number is Palindrome or Not...
#include <stdio.h>
int main() 
{
    int n, rev=0, rem, a;

    printf("Enter any integer : ");
    scanf("%d", &n);
    
    a = n;

    while (n>0) 
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if (a == rev)
    {
        printf("\n Given number %d is Palindrome.", a);
    }
    else
    {
        printf("\n Given number %d is Not Palindrome.", a);
    }
    
    return 0;
}
