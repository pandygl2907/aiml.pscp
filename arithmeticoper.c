// C program for addition, subtraction, multiplication, division and modulus of two numbers
#include <stdio.h>

int main() 
{
    int a,b,add,sub,mul,div,mod;
    
    printf("Enter two numbers....\n");
    scanf("%d %d", &a, &b);
    
    add = a + b;
    printf("\nAddition : %d", add);
    
    sub = a - b;
    printf("\nSubtraction : %d", sub);
    
    mul = a * b;
    printf("\nMultiplication : %d", mul);
    
    div = a / b;
    printf("\nDivision : %d", div);
    
    mod = a % b;
    printf("\nModulo : %d", mod);
    
    return 0;
}
