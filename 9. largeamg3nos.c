// C Program to find the largest among three numbers...

#include<stdio.h>
int main()    
{    
    int a, b, c;    
    
    printf("Enter three numbers : \n");    
    scanf("%d %d %d", &a, &b, &c);    
    
    if(a>b && a>c)    
    {    
        printf("A = %d is big...\n", a);
    }
    
    else if(b>c)    
    {    
        printf("B = %d is big...\n", b);
    }

    else    
    {    
        printf("C = %d is big...\n", c);
    }

    printf("\nEnd of Program...");

    return 0;  
}
