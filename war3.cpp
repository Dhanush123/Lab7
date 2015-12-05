// Lab 6
// Programmer: Dhanush Patel
// Editor(s) used: Eclipse
// Compiler(s) used: Eclipse

#include <iostream>
#include<string>
#include <sstream>
using namespace std;

#include <ctime>
#include <cstdlib>
#include <cstring>

int main()
{
	srand(time(0));
	cout << "Programmer: Dhanush Patel" << endl;
		cout << "Description: This program plays the card game war between a computer and human player as long as the human likes while keeping score." << endl;
	    cout << endl;
	int hWin = 0;
	int cWin = 0;
	char answer;

    do{
		//computer part starts here
		int compCardVal = 2 + (rand() % 12);
		string displayCompCardVal = "Computer's card is a ";
		if(compCardVal <= 10){
			stringstream ss;
			ss << compCardVal;
			displayCompCardVal += ss.str() + " of ";
		}
		if(compCardVal == 11)
			displayCompCardVal += "Jack of ";
		if(compCardVal == 12)
			displayCompCardVal += "Queen of ";
		if(compCardVal == 13)
			displayCompCardVal += "King of ";
		if(compCardVal == 14)
			displayCompCardVal += "Ace of ";

		int compCardSuit = rand() % 4;
		string displayCompCardSuit;
		if(compCardSuit == 0)
			displayCompCardSuit = "Spades ";
		if(compCardSuit == 1)
			displayCompCardSuit = "Diamonds ";
		if(compCardSuit == 2)
			displayCompCardSuit = "Hearts ";
		if(compCardSuit == 3)
			displayCompCardSuit = "Clubs ";

		string displayCompCard = displayCompCardVal + displayCompCardSuit;
		cout << displayCompCard << endl;

		//human part starts here

		int humanCardVal = 2 + (rand() % 12);
		string displayHumanCardVal = "Human's card is a ";;
		if(humanCardVal <= 10){
				stringstream ss;
				ss << humanCardVal;
				displayHumanCardVal += ss.str() + " of ";
			}
		if(humanCardVal == 11)
			displayHumanCardVal += "Jack of ";
		if(humanCardVal == 12)
			displayHumanCardVal += "Queen of ";
		if(humanCardVal == 13)
			displayHumanCardVal += "King of ";
		if(humanCardVal == 14)
			displayHumanCardVal += "Ace of ";

		int humanCardSuit = rand() % 4;
		string displayHumanCardSuit;
		if(humanCardSuit == 0)
			displayHumanCardSuit = "Spades";
		if(humanCardSuit == 1)
			displayHumanCardSuit = "Diamonds";
		if(humanCardSuit == 2)
			displayHumanCardSuit = "Hearts";
		if(humanCardSuit == 3)
			displayHumanCardSuit = "Clubs";

		string displayHumanCard = displayHumanCardVal + displayHumanCardSuit;
		cout << displayHumanCard << endl;

		//display results here

		if(compCardVal < humanCardVal){
			cout << "--<< Human wins! >>--" << endl;
			hWin++;
			stringstream ss;
			ss << cWin;
			string cDis = ss.str();
			stringstream ss2;
			ss2 << hWin;
			string hDis = ss2.str();
			cout << "Computer wins: " << cDis << ", Human wins: " << hDis << endl;
			do{
			cout << "Continue? [Y/N] ";
			cin >> answer;
			cin.ignore(1000, 10);
			if(toupper(answer) == 'N'){
				break;
			}
			if(toupper(answer) == 'Y'){
				break;
			}
		  }while(toupper(answer) == 'Y' || toupper(answer) == 'N');
		}
		if(compCardVal == humanCardVal){
			cout << "--<< It's a tie. >>--" << endl;
			stringstream ss;
			ss << cWin;
			string cDis = ss.str();
			stringstream ss2;
			ss2 << hWin;
			string hDis = ss2.str();
			cout << "Computer wins: " << cDis << ", Human wins: " << hDis << endl;
			do{
			cout << "Continue? [Y/N] ";
			cin >> answer;
			cin.ignore(1000, 10);
			if(toupper(answer) == 'N'){
				break;
			}
			if(toupper(answer) == 'Y'){
				break;
			}
		  }while(toupper(answer) == 'Y' || toupper(answer) == 'N');
		}
		if(compCardVal > humanCardVal){
			cout << "--<< Computer wins! >>--" << endl;
			cWin++;
			stringstream ss;
			ss << cWin;
			string cDis = ss.str();
			stringstream ss2;
			ss2 << hWin;
			string hDis = ss2.str();
			cout << "Computer wins: " << cDis << ", Human wins: " << hDis << endl;
			do{
			cout << "Continue? [Y/N] ";
			cin >> answer;
			cin.ignore(1000, 10);
			if(toupper(answer) == 'N'){
				break;
			}
			if(toupper(answer) == 'Y'){
				break;
			}
		  }while(toupper(answer) == 'Y' || toupper(answer) == 'N');
		}
    }while(toupper(answer) == 'Y');
}


