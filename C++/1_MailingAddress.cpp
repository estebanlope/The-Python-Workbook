#include <iostream>
#include <string>
using namespace std;

int main(){
	string name="", address="", city="", country="";
	int zipCode;
	
	name = "Lopez-Ramirez, Esteban";
	zipCode = 170004;
	address = "Cra 34 D - # 11 - 11";
	city = "Manizales";
	country = "Colombia";
	
	cout << name << endl << city << ", " << country << endl << address << endl << zipCode;
}
