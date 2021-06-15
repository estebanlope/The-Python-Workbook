/*
In the United States, fuel efficiency for vehicles is normally expressed in miles-pergallon
(MPG). In Canada, fuel efficiency is normally expressed in liters-per-hundred
kilometers (L/100 km). Use your research skills to determine how to convert from
MPGto L/100 km. Then create a program that reads a value from the user in American
units and displays the equivalent fuel efficiency in Canadian units.
*/

#include <iostream>
using namespace std;

int main(){
  // Set constants
  float MPG_TO_LPHK = 235.215, fuelAmerican;

  // Read the input from the user
  cout << "Enter the fuel in American Units: ";
  cin >> fuelAmerican;

  // Calculate and display the results
  printf("\nThe fuel in Canadian units is: %.2f", fuelAmerican * MPG_TO_LPHK);
}
