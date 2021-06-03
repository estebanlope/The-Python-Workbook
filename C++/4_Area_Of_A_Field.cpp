/*
Create a program that reads the length and width of a farmer�s field from the user in
feet. Display the area of the field in acres.
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
	// Setting the constants and variables
	float SQRTFEET_ACRE = 43560;
	float field_l, field_w, field_a;
	
	// Reading the data
	cout << "Enter the length of the field: ";
	cin >>  field_l;
	
	cout << "Enter the width of the field: ";
	cin >>  field_w;
	
	// Calculating the area
	field_a = field_l * field_w / SQRTFEET_ACRE;

	// Displaying the results
	printf("The area of the field is %.2f acres.", field_a);
}
