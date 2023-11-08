// Array Operations - 2D Array Multiplication...
#include <stdio.h>
int main() 
{
    int a[10][10], b[10][10], mul[10][10];
    int r1, c1, r2, c2;
    int i, j, k;
    
    printf("Enter the Row and Column of A Matrix : ");
    scanf("%d %d", &r1, &c1);
    
    printf("Enter the Row and Column of B Matrix : ");
    scanf("%d %d", &r2, &c2);

    if(c1 == r2)
    {
        printf("\nEnter the elements for A Matrix...\n");
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c1; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        
        printf("\nEnter the elements for B Matrix...\n");
        for(i=0; i<r2; i++)
        {
            for(j=0; j<c2; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
    
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c2; j++)
            {
                mul[i][j] = 0;
                for(k=0; k<r2; k++)
                {
                    mul[i][j] += a[i][k] * b[k][j];
                }
            }
        } 
        
        printf("\nResult of Matrix Multiplication...\n");
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c2; j++)
            {
                printf("%d ", mul[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("\nMatrix Multiplication is not Possible...\n");
    }
    printf("\nEnd of the Program...\n");
  
    return 0;
}
