/*
An online retailer sells two products: widgets and gizmos. Each widget weighs 75
grams. Each gizmo weighs 112 grams. Write a program that reads the number of
widgets and the number of gizmos in an order from the user. Then your program
should compute and display the total weight of the order.
*/

#include <iostream>
using namespace std;

int main(){
	// Set the constants
	int WID_WEIGHT = 75, GIZ_WEIGHT = 112, numWidgets, numGizmos, totalWeight;
	
	// Read the input from the user
	cout << "Enter the number of widgets: ";
	cin >> numWidgets;
	
	cout << "Enter the number of gizmos: ";
	cin >> numGizmos;
	
	// Calculate and display the results
	totalWeight = WID_WEIGHT * numWidgets + GIZ_WEIGHT * numGizmos;
	printf("The total weight of the order is %d grams.", totalWeight);
}
