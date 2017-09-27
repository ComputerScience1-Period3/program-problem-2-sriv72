/*
Pranay Srivastava- 3rd Period- September 25, 2017
Assignment Name: Take_in_Data
Intro to "cin" command and taking in data by asking user questions and storing answers as variables.
*/

//Libraries
#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> // gives access to _kbhit() and _getch() for pause()

//Namespaces
using namespace std;

//Functions
void pause() {
	cout << "Press any key to continue...";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

//MAIN
void main() {
	//Define and Assign Variable(s)
	int grade; // What grade are you in?
	char day; // What is your favorite day, A-Day or B-Day?
	bool sport; // Do you play a sport?
	double hours; // How much time (to the nearest quarter hour) do you spend doing homework?

	//User Queries
	cout << "What grade are you in? (answer with number) : ";
	cin >> grade;
	cout << "Which day do you like better, A-Day or B-Day? (answer with A/B) : ";
	cin >> day;
	cout << "Do you play a sport? (1 if yes, 0 if no) : ";
	cin >> sport;
	cout << "How much time do you spend doing homework (decimal to the nearest quarter hour)? : ";
	cin >> hours;

	//Display
	cout << "You are in Grade " << grade << endl;
	cout << "You like " << day << "-Days better." << endl;
	cout << boolalpha << "It is " << sport << " that you play a sport." << endl;
	cout << "You spend " << hours << " hours doing homework." << endl;

	pause();
}