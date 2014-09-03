#include <iostream>
#include <string>

using namespace std;


int main(){
	int a,b;

	cout << "Enter first num : " << endl;
	cin >> a;

	cout << "Enter second num : " << endl;
	cin >> b;

	// write missing code here
	a = a + b;
	b = a - b;
	a = a - b; 


	cout << a << " & " << b << endl;
	return 0;
}

