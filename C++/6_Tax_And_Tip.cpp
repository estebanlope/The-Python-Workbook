/*
The program that you create for this exercise will begin by reading the cost of a meal
ordered at a restaurant from the user. Then your program will compute the tax and
tip for the meal. Use your local tax rate when computing the amount of tax owing.
Compute the tip as 18 percent of the meal amount (without the tax). The output from
your program should include the tax amount, the tip amount, and the grand total for
the meal including both the tax and the tip. Format the output so that all of the values
are displayed using two decimal places.
*/

#include <iostream>
using namespace std;

int main(){
  // Setting Constants
  float TAX = 0.08;
  float TIP = 0.18;
  float cost, tax, tip, total;

  // Reading the data
  cout << "Enter the cost of the meal: ";
  cin >> cost;

  // Calculating
  tax = cost * TAX;
  tip = cost * TIP;
  total = cost + tax + tip;

  // Displaying the results
  printf("The tax of the meal is $%.2f dollars.\n", tax);
  printf("The tip of the meal is $%.2f dollars.\n", tip);
  printf("The total of the meal is $%.2f dollars.\n", total);
}
