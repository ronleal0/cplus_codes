#include <iostream>
#include <string>
using namespace std;

int main(){
	cout << endl;


	/*
		printf - print formatted data
		scanf  - read formmatted data

		formats:
		%d or %i - integer
		%f 		 - float
		%s 		 - string
		%c 		 - characters 

	*/

	// printf()
	// format: printf("control string", arg1, arg2...argN);

	printf("hello World"); 		// simply prints string literal
	printf("%d is greater than %d", 5, 2); // 5 is greater than 2
	printf("%s is your name", "Roberto");  // Roberto is your name
	prinft("%c is a letter", 'A');		   // A is a letter


	int num = 98765;
	printf("%d", num);	// 98765
	printf("%6d", num); // right align [][9][8][7][6][5]
	printf("%-6d",num); // left align [9][8][7][6][5][]


	float dec = 98.765;
	printf("%f", dec);	  // 98.765
	printf("The number is %f", dec);	// The number is 98.765 (simple concatination)
	prinft("%7.3f", dec); // 98.765		[][9][8][.][7][6][5]
	prinft("7.2f",dec);	  // 98.77		[][][9][8][.][7][7]  -- rounded off one the second decimal place

	// printing mixed data
	printf("%s for string, %d for int, %c for char and %f for float", "string", 80, 'a', 10.5);
	// string for string, 80 for int, a for char and 10.5 for float


	//scanf()
	// format: printf("control string", arg1, arg2...argN);
	// the & sign is necessary before the variable. This means that we are storing on the address of the variable in memory
	scanf("%d", &num);		// the same as cin >> num
	scanf("%d %d", &a, &b)  // multiple storage in a single line like: cin >> a; cin >> b;
	scanf("%c %c %c", &a, %b) // The last %c will be ignored
	scanf("%s %c %d %lf", &varString, &varChar, &varInteger, &varDouble); // reading mixed data

	cout << endl;
	return 0;
}