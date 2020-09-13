
/*
Dale Weaver
C++ Fall 2020
Due : 14 Sep 2020
Lab 2 Name: Weekly class schedule and stars
Lab description: This is our second lab. We are supposed to create a program that displays out class schedule as well as a pattern.
*/

#include <iostream>
#include <string>

using namespace std;

// this part will set up the days I have classes


//this part right here shoes the time my classes start
const string eight = "8:00		";
const string nine = "9:00		";
const string one = "1:00		";
const string onethree = "1:30		";
const string threethree = "3:30		";
const string sixthree = "6:30		"; 
// this part right here shoes what classes I have
const string C = "Calc 1 \n";
const string Co = "Comp 1 \n";
const string VSC = "Varsity Sports Conditioning \n";
const string TCE = "The College Experience \n";
const string CPP = "C++ \n";
const string ITP = "Intro to Psychology \n";
const string EP = "Engineering Problems \n";
// this part right here shows the days of the week
const string M = "Monday		"; 
const string T = "Tuesday		"; 
const string W = "Wednesday	"; 
const string Th = "Thursday	"; 
const string F = "Friday		"; 

const string Uno = "    #	    #	    #	    # \n"; // this is the first line of #'s
const string Dos = "#	#	#	# \n"; // this is the second line of #'s

int main()
{
	cout << M << eight << C;
	cout << M << nine << Co;
	cout << M << onethree << CPP;
	cout << M << threethree << VSC;
	cout << M << sixthree << TCE;
	cout << T << nine << EP;
	cout << T << one << CPP;
	cout << W << eight << C;
	cout << W << nine << Co;
	cout << Th << one << ITP; 
	cout << F << eight << C;

	cout << Uno << Dos << Uno << Dos << Uno << Dos << Uno << Dos; // prints the #'s by printing the firs tline then the second 4 times

	return 0;
}
