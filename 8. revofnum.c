  // C Program to print reverse order of any given number...

#include<stdio.h>
int main()    
{    
    int n, rev=0, a;    
    
    printf("Enter any number : ");    
    scanf("%d", &n);    
    
    while(n>0)    
    {    
        a = n % 10;    
        rev = rev * 10 + a;    
        n = n / 10;    
    }
    printf("\nReverse order of the given number is : %d", rev);

    return 0;  
}
