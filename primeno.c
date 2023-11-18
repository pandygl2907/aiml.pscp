// C Program to Check the given number is Prime number...

#include<stdio.h>
int main()    
{    
    int n, i, temp=0;
    
    printf("Enter any number : ");    
    scanf("%d", &n);    
    
    if(i==0 || i==1)
    {
        temp = 1;
    }
    for(i=2; i<n/2; i++)
    {
        if(n%i == 0)
        {
            temp = 1;
            break;
        }
    }
    
    if(temp == 1)
    {
        printf("It's prime number...");
    }
    
    else
    {
        printf("It's not a prime number...");
    }
    
    printf("\nEnd of Program...");
    return 0;  
}
