/*
	EXPLANATIONS:
	stringstream gets a value from a string depending on the datatype of the variable to where
	it is storing values to. 

	<sstream> must be included to use stringstream() function
*/



#include <iostream>
#include <string>
#include <sstream>  // This is needed

using namespace std;

int main(){
	cout << endl << endl;

	string myString;
	float price = 0;
	int quantity = 0;

	cout << "Enter price : " << endl;		// user enters 50
	getline(cin, myString);   				// myString = "50"
	stringstream(myString) >> price;		// 50 is extracted from the string "50" and stored in variable price
											// price = 50 (float 50)

	cout << "Enter quantity : " << endl;	// user enters 10
	getline(cin, myString);					// myString = "10"
	stringstream(myString) >> quantity;		// 10 is extracted from the string "10" and stored in variable price
											// quantity = 10; (integer 10)


	// compute the total price = price * quantity
	cout << "\nTotal price is : " << price * quantity <<  endl;

	cout << endl << endl;
	return 0;
}