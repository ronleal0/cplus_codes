#include <iostream>
#include <string>

using namespace std;

int main(){

string name;

cout << "What is your name?" << endl;
cin >> name;

//correct way to accept strings
//getline(cin, name)


//output name
cout << name;



return 0;
}
