// C Program to print sum of any given number...
#include<stdio.h>
int main()    
{    
    int n, sum=0, a;    

    printf("Enter any number : ");    
    scanf("%d", &n);    

    while(n>0)    
    {    
        a = n % 10;    
        sum = sum + a;    
        n = n / 10;    
    }    

    printf("Sum of the given number is : %d", sum);    
    return 0;  
}
