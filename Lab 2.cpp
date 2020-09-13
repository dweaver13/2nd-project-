
/*
Dale Weaver
C++ Fall 2020
Due : 14 Sep 2020
Lab 2
Lab description
This is our second lab. We are supposed to create a program that displays out class schedule as well as a pattern.
*/

#include <iostream>
#include <string>

using namespace std;

// this part will set up the days I have classes
void printMon;
void printTues;
void printWed;
void printThu;
void printFri;

const string Monday = "Calc 1 8-9, Comp 1 9-10;30, C++ 1:30-2:30, The College Experience 6:30-8:30.\n";
const string Tuesday = "Engineering Problems 9-10:30, C++ 1-2:30. \n";
const string Wednesday = "Calc 1 8-9, Comp 1 9-10:30. \n";
const string Thursday = "Intro to Psych 1-2:30. \n";
const string Friday = "Calc 8-9. \n";

int main() 
{
	cout << "Monday: ";
	printMon();
	cout << "Tuesday: ";
	printTue();
	cout << "Wednesday: ";
	printWed();
	cout << "Thursday: ";
	printThu();
	cout << "Friday: ";
	printFri();

	return 0;
}

void printMon()
{
	cout << Monday;
}

void printTue()
{
	cout << Tuesday;
}

void printWed()
{
	cout << Wednesday;
}

void printThu()
{
	cout << Thursday;
}

void printFri()
{
	cout << Friday;
}