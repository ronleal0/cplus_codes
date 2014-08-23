#include <iostream>
#include <string>

using namespace std;


int main(){
	cout << endl << endl << endl << endl;
	
	int a;
	cout << "Enter a number: " << endl;
	cin >> a;

	int b = a%2;

	if(b==0){
		cout << "Number is Even" << endl;
	}else{
		cout << "Number is Odd" << endl;
	}


	cout << endl << endl << endl << endl;
	return 0;
}

