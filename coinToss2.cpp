// Lab 6
// Programmer: Dhanush Patel
// Editor(s) used: Eclipse
// Compiler(s) used: Eclipse

#include <iostream>
using namespace std;

#include <ctime>
#include <cstdlib>

int main()
{
	srand(time(0));
	cout << "Programmer: Dhanush Patel" << endl;
	cout << "Description: This program randomly prints either heads or tails for a user specified number of tosses." << endl;
	cout << endl;

	int tosses;
	cout << "Enter the number of tosses to perform: ";
	cin >> tosses;
	cin.ignore(1000, 10);

	int count = 0;

	while (count != tosses){
	int num = rand() % 2;
		if(num == 0){
			cout << "Heads" << endl;
		}
		else{
			cout << "Tails" << endl;
		}
		count++;
	}
}

