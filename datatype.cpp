#include <iostream>
#include <string>
using namespace std;


int main(){
	cout << endl << endl << endl << endl;
	//writing a variable
	//Format: datatype variableName = value;

	int 	integerVar = 10;
	float 	floatVar 	= 10.000000; //6 precision
	double	doubleVar	= 10.000000000000000; //15 precision
	long double longVar = 10.0000000000000000000; //19 precision

	char characterVar 	= 'a'; 
	strning stringVar	= "This is a string";
	bool booleanVar		= true;


	cout << "Integer : " << integerVar << endl;
	cout << "float : " << floatVar << endl;
	cout << "Double : " << doubleVar << endl;
	cout << "Long Double : " << longVar << endl;

	cout << "character : " << characterVar << endl;
	cout << "String : " << stringVar << endl;
	cout << "boolean : " << booleanVar << endl << endl << endl;


	cout << endl << endl << endl << endl;
	return 0;
}
