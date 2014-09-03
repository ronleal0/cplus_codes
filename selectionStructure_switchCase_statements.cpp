/*
	SWITCH CASE 
	This will explain more about switch cases
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
	cout << endl << endl;

	// Switch statements are basically the same as if-else-if statements but limited to constant expressions
	/*
		SYNTAX

		switch(expression)
		{
			case constant1:
			     group-of-statements-1;
			     break;
			case constant2:
			     group-of-statements-2;
			     break;
			case constant3:
			     group-of-statements-3;
			     break;
			default:
			    default-group-of-statements
		}


		EXPLANATION:
		switch evaluates the expression first then checks if it is equivalent to a certain constant. 
		If the expression is equivalent to constant1, it will run the statements inside it until it finds 'break'
		If there are no equivalent constant, it will run statements in 'default'
	*/

	// In the code below, case 2 is evaluated since x = 2;

	int x = 2;
	switch(x)
	{
		case 1:
			cout << "x is 1" << endl;
			break;
		case 2:
			cout << "x is 2" << endl;
			break;
		case 3: 
			cout << "x is 3" << endl;
			break;
		default:
			cout << "x is unknown" << endl;
	}

	// output - "x is 2"




	cout << endl << endl;
	return 0;
}