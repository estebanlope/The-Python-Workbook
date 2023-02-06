/*
In this exercise, you will create a program that begins by reading a measurement
in feet from the user. Then your program should display the equivalent distance in
inches, yards and miles. Use the Internet to look up the necessary conversion factors
if you don’t have them memorized.
*/

#include <iostream>
using namespace std;

int main()
{
  // Set constants
  float FOOT_TO_IN = 12,
  		FOOT_TO_YD = 0.33333333,
  		FOOT_TO_MI = 0.000189394,
        feet, inches, yards, miles;

  // Read the input from the user
  cout << "Enter the number of feet: ";
  cin >> feet;

  // Calculate and display the results
  inches = feet * FOOT_TO_IN;
  yards = feet * FOOT_TO_YD;
  miles = feet * FOOT_TO_MI;
  printf("\n %.2f foot to inches are: %.2f in", feet, inches);
  printf("\n %.2f foot to yards are: %.2f in", feet, yards);
  printf("\n %.2f foot to miles are: %.10f in", feet, miles);
}
