
/*

'#include' 
- is a directive that tells the program to include something - usually a library.
*/
#include <iostream> 	// include the 'iostream' library so we can use 'cout' and 'cin'
#include <string>   	// include the 'string' library so we can use the 'string' datatype

using namespace std; 	//this is a notation so we dont have to do std::cout or std::cin everytime

// The main function is the main executor of the program
// 'int' is the datatype of the return value
int main(){
	
	//display 'Hello World' into the console
	cout << "Hello World" << endl; //endl means end of line


	// the return value of this function is the integer 0. Every function returns something.
	return 0;
}

