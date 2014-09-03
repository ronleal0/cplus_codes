#include <iostream>
#include <string>
using namespace std;

int main(){
	
	//standard I/O - cin, cout
	//COUT - use to ouput. It uses the insertion operator "<<"
	
	cout << "Hello World";	// prints string literal "Hello World"
	cout << 123;			// prints integer constant 123
	cout << x;				// prints the value of the variable x

	//These two ouputs has different results
	cout << "hello";		// prints the string literal "hello"
	cout << hello;			// prints the value of the variable hello

	//CHAINING
	//Use multiple "<<" (insertion operator) to do chaining
	cout << "Hello" << " my name is " << "Roberto.";     //prints "Hello my name is Roberto"

	// You can mix literals and variables in CHAINING
	string name = "Roberto";	
	cout << "Hello" << " my name is " << name; 			//prints "Hello my name is Roberto"

	// What cout does not do automatically is add line breaks at the end. 
	// Add newline by inserting endl; or adding '\n' 
	cout << "This is first line" << endl;			// using endl
	cout << "This is second line\n";				// using newline character
	cout << 123 << '\n';							// chaining with newline character
	cout << "One line . \n Another Line";			// using newline within string




	//CIN
	// - used to extract data from an input. It uses the extraction operator ">>"
	int age;
	cin >> age;

	/*
		MORE EXPLANATIONS:

		cin uses the datatype of the variable after ">>". In the above example, cin is expecting an integer. If the input datatype is different, cin will fail.

	*/

	// cin can also be chained in one extraction of more than one data in a single statement
	cin >> a >> b;

	//also the same as:
	cin >> a;
	cin >> b;


	// CIN and STRINGS
	//cin can be used to get strings of characters, but only gets those before a space
	string name;  //Roberto Rodriguez
	cin >> name;  
	cout << name; //Rober

	//GETLINE
	// to get the entire line from cin, use the getline() function 
	// 1st parameter : stream (cin)
	// 2nd parameter : string (value/variable)

	string name;
	getline(cin, name);  


	//invalid. getline is for strings only
	float grades;
	getline(cin, grades);


	/*
		MORE EXPLANATIONS:
		See code below. Notice how the variable name is used multiple times in getline?
		In the second call, the old value of name is simply replaced by the new value. This does not throw an error.
	*/
	string name;
	cout << "What is your name : " << endl;
	getline(cin, name);

	cout << "What is your nickname : " << endl;
	getline(cin, name);



	// how to get input disregarding datatypes? See stringstream.cpp


	return 0;
}