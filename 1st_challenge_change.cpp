#include <iostream>
#include <string>

using namespace std;


int main(){
	cout << endl << endl << endl;

	cout << "\tThis challenge will rearrange 2 integer inputs by only using 2 variables" << endl;

	cout << endl << endl << endl;

	int a,b;

	cout << "Enter first Number: " << endl;
	cin >> a;
	cout << "Enter second Number: " << endl;
	cin >> b;


	cout << endl << endl;
	cout << "Original numbers: " << endl;
	cout << a << " & " << b << endl;

	a = a + b;
	b = a - b;
	a = a - b;

	cout << "Rearranged numbers: " << endl;
	cout << a << " & " << b << endl;


	
	cout << endl << endl << endl;
	return 0;
}

