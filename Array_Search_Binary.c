// C Program to Implement Binary Search using One Dimensional Array....

#include<stdio.h>

int main()
{
  int n, a[100], i, s, start, end, middle;

  printf("Enter the n value : "	);
  scanf("%d", &n);

  printf("Enter the elements : \n");
  for(i=0; i<n; i++)
  {
    scanf("%d", &a[i]);
  }

  printf("Enter the search value : ");
  scanf("%d", &s);

  start = 0;
  end = n-1;
  middle = (start+end)/2;

  while(start <= end)
  {
    if(a[middle] < s)
    {
      start = middle + 1;
      middle = (start+end)/2;
    }
    else if(a[middle] > s)
    {
      end = middle-1;
      middle = (start+end)/2;
    }
    else
    {
      printf("\nSearch element found in location %d", middle+1);
      break;
    }
  }

  if(start > end)
  {
    printf("\nSearch element not found in any location...");
  }
  return 0;
}
