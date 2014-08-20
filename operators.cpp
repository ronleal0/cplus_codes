#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;


int main(){
	cout << endl << endl << endl << endl;


	/*
	// INCREMENT AND DECREMENT
	int num;
	cout << “Key-in a number: “ << endl;
	cin >> num;

	cout << "Value after incremented: " << num++ << endl;
	cout << "Value after decremented: " << num++ << endl;
	*/

	
	
	//POST FIX
	int num = 5;
	int postFix = num++ - 2;

	cout << "POSTFIX" << endl;
	cout <<  "num++ - 2 = " << postFix << endl;

	//PREFIX
	int another = 5;
	cout << endl << endl;
	cout << "PREFIX" << endl;
	cout << "++another - 2 = " << (++another - 2) << endl; 
	





	//COERCION 
	/*
	int x = 10;
	float y;

	y = float(x);

	cout << "y = " << y;
	*/
	

	//cout << "5|6 = " << int c <<endl;
 



	cout << endl << endl << endl << endl;
	return 0;
}

