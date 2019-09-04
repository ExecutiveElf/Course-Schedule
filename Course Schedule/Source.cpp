/* Benjamin Roe
 C++ Fall 2019
 Due September 12, 2019
 Lab 2 Exploring Output
 Getting Class Schedule and Checker Board to display.
*/

#include <iostream>
using namespace std;

void Calc();
void Col();
void Cpp();
void Mon();
void Tue();
void Wed();
void Thu();
void Fri();

int main()
{
	Mon();
	Tue();
	Wed();
	Thu();
	Fri();
	return 0;
}

//Gaps between days and quotes are to create appropriate spacing.
//Monday
void Mon()
{
	cout << "Monday		";
	Calc();
	cout << "Monday		";
	Col();
	cout << "Monday		";
	Cpp();
	cout << endl;
}

//Tuesday
void Tue()
{
	cout << "Tuesday		";
	Calc();
	cout << "Tuesday		";
	Cpp();
	cout << endl;
}

//Wednesday
void Wed()
{
	cout << "Wednesday	";
	Calc();
	cout << "Wednesday	";
	Col();
	cout << "Wednesday	";
	Cpp();
	cout << endl;
}

//Thursday
void Thu()
{
	cout << "Thursday	";
	Calc();
	cout << "Thursday	";
	Cpp();
	cout << endl;
}

//Friday
void Fri()
{
	cout << "Friday		";
	Col();
	cout << endl;
}

//Calculus
void Calc()
{
	cout << " 8:00	Calculus 210" << endl;
}

//College Experiance 
void Col()
{
	cout << "11:30	College Experience 108 " << endl;
}

//C++
void Cpp()
{
	cout << "12:40	C++ 162" << endl ;
}