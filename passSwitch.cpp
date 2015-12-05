// Lab 7
// Programmer: Dhanush Patel
// Editor(s) used: Eclipse
// Compiler(s) used: Eclipse

#include <iostream>
using namespace std;

int main()
{
  cout << "Programmer: Dhanush Patel" << endl;
  cout << "Description: This program tells whether a grade is passing or not." << endl;
  cout << endl;

  // read a grade from the keyboard (see 5.1)
  char grade;
  cout << "What is your grade? [A, B, C, D, or F]: ";
  cin >> grade;
  cin.ignore(1000, 10);

  switch (grade){
	  case 'A': case 'B': case 'C':
		  cout << "You pass" << endl;
		  break;
	  case 'D': case 'F':
		  cout << "You do not pass" << endl;
		  break;
	  default:
		  cout << "Invalid entry" << endl;
  }
}
