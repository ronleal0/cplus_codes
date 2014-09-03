#include <iostream>
#include <string>

using namespace std;


int main(){
	double num;
	cout << "Enter a number : " << endl;
	cin >> num;

	while(num != 0){
		cout << "Enter another number: " << endl;
		cin >> num;
		num += num;
	}

	cout << "TOTAL is " << num << endl;
	return 0;
}

