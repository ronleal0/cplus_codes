//Demonstrating variable scope
#include <iostream>
using namespace std;


//define the function here

int age = 10;

//SCOPE 
//Global scope
// Local scope

int printYourAge(int age){
	return age;
}


int main() {                              
// Function scope starts here
cout << endl << endl;


printYourAge(age);

cout << endl << endl;
  return 0;
}   