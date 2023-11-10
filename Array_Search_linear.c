// C Program to implement Linear Search using One Dimensional Array....

#include <stdio.h>
int main()
{
  int a[10],n,i,j,temp;

  printf("Enter the n value : ");
  scanf("%d", &n);

  printf("Enter the values : ");
  for (i=0; i<n; i++)
  {
    scanf("%d", &a[i]);
  }

  for (i=0; i<n-1; i++)
  {
    for (j=0; j<n-i-1; j++)
    {
      if (a[j] > a[j+1])
      {
      	temp = a[j];
      	a[j] = a[j+1];
      	a[j+1] = temp;
      }
    }
  }

  printf("\nSorted array....\n");
  for (i=0; i<n; i++)
  {
    printf("%d ", a[i]);
  }

  return 0;
}
