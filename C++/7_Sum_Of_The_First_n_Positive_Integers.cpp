/*
Write a program that reads a positive integer, n, from the user and then displays the
sum of all of the integers from 1 to n. The sum of the first n positive integers can be
computed using the formula:
n = ( n * (n + 1) ) / 2
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
  // Setting Constants
  int n, sm;

  // Reading the data
  cout << "Enter a positive integer: ";
  cin >> n;

  // Calculating
  sm = ( n * (n + 1) ) / 2;

  // Displaying the results
  cout << "The sum of the first " << n << " positive integers is: " << sm << endl;
}
