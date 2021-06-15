/*
Create a program that reads two integers, a and b, from the user.Your program should
compute and display:
• The sum of a and b
• The difference when b is subtracted from a
• The product of a and b
• The quotient when a is divided by b
• The remainder when a is divided by b
• The result of log10 a
• The result of ab
*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){
  // Set constants
  int intA, intB;

  // Read the input from the user
  cout << "Enter the value of A: ";
  cin >> intA;
  
  cout << "Enter the value of B: ";
  cin >> intB;

  // Calculate and display the results
  printf("\nThe sum of a and b is: %d\n", intA + intB);
  printf("The difference when b is subtracted from a is: %d\n", intA - intB);
  printf("The product of a and b is: %d\n", intA * intB);
  printf("The quotient when a is divided by b is: %d\n", intA / intB);
  printf("The remainder when a is divided by b is: %d\n", intA % intB);
  printf("The result of log10 a is: %f\n", log10(intA));
  printf("The result of ab is: %d\n", pow(intA, intB));
}
