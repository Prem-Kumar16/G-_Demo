#include <iostream>

using namespace std;

int main()
{

	int year, week, day;

	cout << "Enter the number of days : ";
	cin >> day;

	year = day/365;
	day = day%365;

	week = day/7;
	day = day%7;

	cout << "\nNo of Year(s) = " << year << "\nNo of week(s) = " << week << "\nNo of day(s) = " << day << endl;

	return 0;

} 
