// C Program to add 2 numbers (Get input from the user)
#include<stdio.h>                        // Header File
int main()                               // Main Function
{                                         // Main Function Starts
  int a, b, c;                           // variable Declaration
  printf("Enter 2 nos. to add : \n");    // Print the Result to the User
  scanf("%d %d", &a, &b);                // Get input from User
  c = a + b;                             // Calculation Part  
  printf("The Result is : %d", c);       // Print the Result to the User
  return 0;                              // Return the result through an integer
}                                        // Main Function Ends
