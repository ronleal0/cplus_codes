/*
	This will explain more about the if - selection structure

*/

#include <iostream>
#include <string>
using namespace std;

int main(){
	cout << endl << endl;

	// basic syntax
	// if(condition) statement

	if( number == 100)
		cout << "number is 100";

	// if number is not equal to 100, the above statement is ignored

	// if you want to include more than 1 statement, use the scope operators {} to form a block/scope
	if( number == 100){
		cout << "number is 100";				// first statement
		cout << "This is another statement" ; 	// another statement
	}

	// indentation and line breaks has no effect, you can write like this:
	if(number == 100){cout << "number is 100"; cout << "This is another statement";}


	//use else for alternative statement
	/*	
	if(condition)
		statement
	else
		alternative statement
	*/

	if( number == 100 ){
		printf("it is 100");
	}else{
		printf("it is not 100") ;
	}


	// several conditions can also be tested by using "else if"
	if( age >= 7){
		cout << "A kid" << endl;
	}else if((age >= 8) || (age <= 17)){
		cout << "A teen" << endl;
	}else if((age >=18 ) || (age <= 30)) {
		cout << "Young Adult" << endl;
	}else{
		cout << "Adult" << endl;
	}


	// Nested conditions
	// check if it is a boy. If not, then it's a girl
	if(gender == "boy"){

		//check if old or young
		if(age < 18){
			cout << "You are a young boy";
		}else{
			cout << "You are an old boy";
		}
	}else{
		//check if old or young
		if(age < 18){
			cout << "You are a young girl";
		}else{
			cout << "You are an old girl";
		}
	}



	// Ternary operation - only applicable for simple condition. 1 statement pero block
	if(score < 75){
		printf("You failed"); 
	}else{
		printf("You passed");
	}

	// The above can be written as
	(score < 75 ) ? printf("You failed") : printf("You passed");

	// or something like this. (getting result from ternary operation)
	string result = (score < 75) ? "You failed" : "You passed";
	printf("%s\n", result);


	



	







	cout << endl << endl;
	return 0;
}