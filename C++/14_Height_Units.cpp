/*
Many people think about their height in feet and inches, even in some countries that
primarily use the metric system. Write a program that reads a number of feet from
the user, followed by a number of inches. Once these values are read, your program
should compute and display the equivalent number of centimeters.
*/

#include <iostream>
using namespace std;

int main()
{
  // Set constants
  float INCH_TO_CM = 2.54,
        FOOT_TO_CM = 12 * INCH_TO_CM,
        feet, inches, heightInCm;

  // Read the input from the user
  cout << "Enter the number of feet: ";
  cin >> feet;

  cout << "Enter the number of inches: ";
  cin >> inches;

  // Calculate and display the results
  heightInCm = feet * FOOT_TO_CM + inches * INCH_TO_CM;
  printf("\nThe height in centimeters is: %.2f cm", heightInCm);
}
