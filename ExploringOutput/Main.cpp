/*
Muhammad Salman
*/

#include <iostream>

using namespace std;

int main()
{
	const string m = "Monday";
	const string t = "Tuesday";
	const string w = "Wednesday";
	const string th = "Thursday";
	const string f = "Friday";

	const string fcn = "Calculus I";                  // first class name
	const string scn = "C++";                        // second class name
	const string thcn = "Intro to Business";        // third class name

	const string fct = "8:00-9:00";               // first class time
	const string sct = "10:00-11:00";            // second class time
	const string thct = "12:00-1:30";            // third class time
	
	cout << m << "\t\t" << fcn << "\t\t" << fct << endl;
	cout << m << "\t\t" << scn << "\t\t\t" << sct << endl;
	cout << t << "\t\t" << fcn << "\t\t" << fct << endl;
	cout << t << "\t\t" << scn << "\t\t\t" << sct << endl;
	cout << t << "\t\t" << thcn << "\t" << thct << endl;
	cout << w << "\t" << fcn << "\t\t" << fct << endl;
	cout << w << "\t" << scn << "\t\t\t" << sct << endl;
	cout << th << "\t" << fcn << "\t\t" << fct << endl;
	cout << th << "\t" << scn << "\t\t\t" << sct << endl;
	cout << th << "\t" << thcn << "\t" << thct << endl;
	cout << f << "\t\t" << scn << "\t\t\t" << sct << endl;

	return 0;
}