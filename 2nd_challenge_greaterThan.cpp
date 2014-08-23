#include <iostream>
#include <string>

using namespace std;


int main(){
cout << endl << endl;	
cout << "Program will output the highest value of 2 given inputs. If both inputs are equal, display, 'They are equal'" << endl;
cout << endl << endl;

int a, b;
cout << "Enter first number: " << endl;
cin >> a;

cout << "Enter Second number: " << endl;
cin >> b;

if(a > b){
	cout << "Highest is : " << a;
}else if(b > a){
	cout << "Highest is : " << b;
}else{
	cout << "They are equal";
}


cout << endl << endl << endl;
	return 0;
}

