// Lab 7
// Programmer: Dhanush Patel
// Editor(s) used: Eclipse
// Compiler(s) used: Eclipse

#include <iostream>
#include<string>
#include <sstream>
using namespace std;

int main()
{
	srand(time(0));

	cout << "Programmer: Dhanush Patel" << endl;
	cout << "Description: This program plays Rock-Scissors-Paper between a human and computer until the human quits and prints the scores at the end." << endl;
	cout << endl;

	char hChoice;

	// score tracker
	int cScore = 0;
	int hScore = 0;
	do{
		//computer code
		int cChoiceNum = rand() % 3;
		char cChoice;
		switch (cChoiceNum){
			  case 0:
				  cChoice = 'R'; //rock
				  break;
			  case 1:
				  cChoice = 'P'; //paper
				  break;
			  default:
				  cChoice = 'S'; //scissors
		  }

		cout << "Choose: [Rock,Paper,Scissors,Quit]: ";
		cin >> hChoice;

	    if ((char)toupper(hChoice) == 'R' && cChoice == 'R'){
			cout << "Computer: "<< cChoice << ", Human: " << (char)toupper(hChoice) << endl;
		}
		else if ((char)toupper(hChoice) == 'R' && cChoice == 'R'){
			cout << "Computer: "<< cChoice << ", Human: " << (char)toupper(hChoice) << endl;
		}
		else if ((char)toupper(hChoice) == 'R' && cChoice == 'P'){
			cout << "Computer: "<< cChoice << ", Human: " << (char)toupper(hChoice) << endl;
			cScore++;
		}
		else if ((char)toupper(hChoice) == 'R' && cChoice == 'S'){
			cout << "Computer: "<< cChoice << ", Human: " << (char)toupper(hChoice) << endl;
			hScore++;
		}
		//---
		else if ((char)toupper(hChoice) == 'P' && cChoice == 'P'){
			cout << "Computer: "<< cChoice << ", Human: " << (char)toupper(hChoice) << endl;
		}
		else if ((char)toupper(hChoice) == 'P' && cChoice == 'R'){
			cout << "Computer: "<< cChoice << ", Human: " << (char)toupper(hChoice) << endl;
			hScore++;
		}
		else if ((char)toupper(hChoice) == 'P' && cChoice == 'S'){
			cout << "Computer: "<< cChoice << ", Human: " << (char)toupper(hChoice) << endl;
			cScore++;
		}
		//---
		else if ((char)toupper(hChoice) == 'S' && cChoice == 'S'){
			cout << "Computer: "<< cChoice << ", Human: " << (char)toupper(hChoice) << endl;
		}
		else if ((char)toupper(hChoice) == 'S' && cChoice == 'R'){
			cout << "Computer: "<< cChoice << ", Human: " << (char)toupper(hChoice) << endl;
			cScore++;
		}
		else if ((char)toupper(hChoice) == 'S' && cChoice == 'P'){
			cout << "Computer: "<< cChoice << ", Human: " << (char)toupper(hChoice) << endl;
			hScore++;
		}
	}while((char)toupper(hChoice) != 'Q');

	stringstream ss;
	ss << cScore;
	string cScoreString = ss.str();

	stringstream ss2;
	ss2 << hScore;
	string hScoreString = ss2.str();

	cout << "Computer wins: " << cScoreString << endl;
	cout << "Human wins: " << hScoreString << endl;
}

