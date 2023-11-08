// Array Operations - 2D Array I/O Operations...
#include <stdio.h>
int main() 
{
    int a[10][10], row, col, i, j;
    
    printf("Enter the Row of a 2D matrix : ");
    scanf("%d", &row);
    
    printf("Enter the Column of a 2D matrix : ");
    scanf("%d", &col);

    printf("\nEnter the array elements...\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("\nThe array elements are...\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    printf("\nEnd of the Program...\n");
    return 0;
}
