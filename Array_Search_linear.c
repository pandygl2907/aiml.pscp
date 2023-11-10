// C Program to implement Linear Search using One Dimensional Array....

#include<stdio.h>
#include<conio.h>
int main()
{
  int n, a[10], i, s;
  clrscr();
  printf("Enter the n value : ");
  scanf("%d", &n);

  printf("Enter the elements : \n");
  for(i=0; i<n; i++)
  {
    scanf("%d", &a[i]);
  }

  printf("Enter the search value : ");
  scanf("%d", &s);

  for(i=0; i<n; i++)
  {
    if(s == a[i])
    {
      printf("\nSearch element found in location %d", i+1);
      break;
    }
  }
  if(i == n)
  {
    printf("\nSearch element not found in any location...");
  }
  getch();
  return 0;
}
