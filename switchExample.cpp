#include <iostream>
#include <string>
using namespace std;

int main(){
	cout << endl << endl;

	//declare needed variable
	int choice;


	// prompt for choice
	cout << "==============================================" << endl;

	cout << "\tChoose what you want to do" << endl;
	cout << "\t\t(1) - Withdraw Cash" << endl;
	cout << "\t\t(2) - Check Balance" << endl;
	cout << "\t\t(3) - Deposit" << endl;

	cout << "==============================================" << endl;

	cin >> choice;
	switch(choice)
	{
		case 1:
			cout << "You chose to WITHDRAW CASH" << endl;
			break;
		case 2: 
			cout << "You chose to CHECK BALANCE" << endl;
			break;
		case 3:
			cout << "You chose to DEPOSIT" << endl;
			break;
		default:
			cout << "INVALID INPUT" << endl;
	}		


	cout << endl << endl;
	return 0;
}