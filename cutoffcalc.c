// C Program to Calculate Engineering and Medical Cutoff Marks of a Student
#include<stdio.h>
#include<conio.h>
int main()
{
  char name[30];
  int rollno, mat, phy, che, bio, eng_cut, med_cut;

  clrscr();

  printf("Enter the name of the Student : ");
  scanf("%s", name);

  printf("Enter the Roll Number : ");
  scanf("%d", &rollno);

  printf("\nEnter the Maths, Physics, Chemistry and Biology Marks : \n");
  scanf("%d %d %d %d",&mat, &phy, &che, &bio);

  eng_cut = mat + (phy/2) + (che/2);
  printf("\nEngineering Cutoff Mark is : %d", eng_cut);

  med_cut = bio + (phy/2) + (che/2);
  printf("\nMedical Cutoff Mark is : %d", med_cut);

  getch();
  return 0;
}
