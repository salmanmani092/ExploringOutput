/*
Muhammad Salman
Fall 2021
Due: September 15
Lab 2: Exploring output
Description: To get familier with showing output to command prompt using C++.
*/

#include <iostream>

using namespace std;

int main()
{
	// declaring days of the week
	const string m = "Monday";
	const string t = "Tuesday";
	const string w = "Wednesday";
	const string th = "Thursday";
	const string f = "Friday";
	// declaring names of the classes
	const string fcn = "Calculus 210";                  // first class name
	const string scn = "C++ 162";                        // second class name
	const string thcn = "Intro to Business 102";        // third class name
	// declaring time for classes
	const string fct = "8:00";               // first class time
	const string sct = "10:00";            // second class time
	const string thct = "12:00";            // third class time
	// setting up stars and blank spaces
	const string check2 = "*    *    *    * ";
	const string check1 = "  *    *    *    * ";
	
	cout << m << "\t\t" << fct << "\t" << fcn << endl;     // outputting day of the week, class time along with class name on screen
	cout << m << "\t\t" << sct << "\t" << scn << endl;
	cout << t << "\t\t" << fct << "\t" << fcn << endl;
	cout << t << "\t\t" << sct << "\t" << scn << endl;
	cout << t << "\t\t" << thct << "\t" << thcn << endl;
	cout << w << "\t" << fct << "\t" << fcn << endl;
	cout << w << "\t" << sct << "\t" << scn << endl;
	cout << th << "\t" << fct << "\t" << fcn << endl;
	cout << th << "\t" << sct << "\t" << scn << endl;
	cout << th << "\t" << thct << "\t" << thcn << endl;
	cout << f << "\t\t" << sct << "\t" << scn << endl;


	cout << check1 << endl;   // displaying checkerboard with stars and blanks on screen
	cout << check2 << endl;
	cout << check1 << endl;
	cout << check2 << endl;
	cout << check1 << endl;
	cout << check2 << endl;
	cout << check1 << endl;
	cout << check2 << endl;
	return 0;
}