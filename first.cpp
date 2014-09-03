#include <iostream>
#include <string>

using namespace std;


int main(){
	cout << endl << endl;
	
	int first = 10;
	int second = 23;
	int third = 54; 
	int findFirstHigh, final;

	findFirstHigh = (first > second) ? first : second;
	final = (findFirstHigh > third) ? findFirstHigh : third;


cout << final;

	cout << endl << endl;
	return 0;
}

