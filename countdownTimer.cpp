// Lab 7
// Programmer: Dhanush Patel
// Editor(s) used: Eclipse
// Compiler(s) used: Eclipse

#include <iomanip>
#include <iostream>
#include<string>
#include <sstream>
using namespace std;

#ifdef GPP
#include <unistd.h>
#else
#include <cstdlib>
#endif

int main()
{
	cout << "Programmer: Dhanush Patel" << endl;
	cout << "Description: This program is a countdown timer that starts at 10 seconds." << endl;
	cout << endl;

	for(int i = 10; i >= 0; i--){
		if(i==10){
			cout << "10";
		}
		else if (i < 10 && i > 0){
			stringstream ss;
			ss << i;
			string timeToString = ss.str();
			cout << " " + timeToString;
		}
		else{
			cout << "0 blast off!";
		}

       #ifdef GPP
       sleep(1); // one second
       #else

       _sleep(1000); // one thousand milliseconds
       #endif

		cout << '\r'; //carriage return for "animation"
	}
}

