// Array Operations - 2D Array Addition...
#include <stdio.h>
int main() 
{
    int a[10][10], b[10][10], sum[10][10], row, col, i, j;
    
    printf("Enter the Row of a 2D matrix : ");
    scanf("%d", &row);
    
    printf("Enter the Column of a 2D matrix : ");
    scanf("%d", &col);

    printf("\nEnter the elements for A Matrix...\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("\nEnter the elements for B Matrix...\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    
    printf("\nResult of Matrix Addition...\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    
    printf("\nEnd of the Program...\n");
    return 0;
}
