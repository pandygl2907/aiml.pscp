// C Program to Check the given number is Armstrong number...

#include<stdio.h>
int main()    
{    
    int n, a, res=0, rem;
    
    printf("Enter any number : ");    
    scanf("%d", &n);    
    
    a = n;
    
    while(a != 0)
    {
        rem = a%10;
        res = res + rem*rem*rem;
        a = a/10;
    }
    
    if(res == n)
    {
        printf("It's an armstrong number...");
    }
    
    else
    {
        printf("It's not an armstrong number...");
    }
    
    printf("\nEnd of Program...");
    return 0;  
}
