// C Program to find the fibonacci series of given number...

#include<stdio.h>
int main()    
{    
    int n, a=0, b=1, c=0;    
    printf("Enter any number : ");    
    scanf("%d", &n);    
    printf("\nFibonacci Series....\n");
    for(int i=0; i<n; i++)
    {
        a = b;
        b = c;
        c = a + b;
        printf("%d ", b);
    } 
    printf("\nEnd of Program...");
    return 0;  
}
