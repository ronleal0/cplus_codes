#include <iostream>
#include <string>


using namespace std;


int main(){
cout << endl << endl;


// 1. DECLARING AND PRINTING VARIABLES
/*int number = 10;
char letter = 'a';
bool result = true;
string str = "hello";

cout << "Number = " << number << endl;
cout << "Letter = " << letter << endl;
cout << "Result = " << result << endl;
cout << "str = " << str << endl;*/



/*2.	Getting the average of three numbers. 
Create a program that outputs the average of three numbers. 
Let the values of the three numbers be, 10, 20 and 45. 
The expected screen output is,
number 1 = 10
number 2 = 20
number 3 = 45
Average is = 25

int num1 = 10;
int num2 = 20;
int num3 = 45;


int average = (num1 + num2 + num3)/3;

cout << average;
*/



//3. OUTPUT GREATEST VALUE
int first = 10;
int second = 23;
int third = 54; 
int findFirstHigh, final;

findFirstHigh = (first > second) ? first : second;
final = (findFirstHigh > third) ? findFirstHigh : third;


cout << final;



/*
// CONVERSION
double peso;
double dollar = 1.000;
double euro = 0.734719;ß
double yuan = 6.346934;
double koruna = 18.77263;
double krone = 5.449007;
double sheqel = 3.726334;
double dinar = 0.274588;

cout << "Enter Peso: " << endl;
cin >> peso;
cout << endl << endl;

cout << "Dollor: " << dollar * peso << endl;
cout << "Euro: " << euro * peso << endl; 
cout << "Yuan: " << yuan * peso << endl; 
cout << "Koruna: " << koruna * peso << endl;
cout << "Krone: " << krone * peso << endl;
cout << "Sheqel: " << sheqel * peso << endl;
cout << "Dinar: " << dinar * peso << endl;
*/
	
/*
//TEMPERATURE
First: 26° × 9/5 = 234/5 = 46.8
Then: 46.8 + 32 = 78.8° F


float input;

cout << "Enter celsius: " << endl;
cin >> input;

float f = (input * 9)/5 + 32;

cout << input << " celsius is " << f << "fahrenheit";
*/


cout << endl << endl;
	return 0;
}

