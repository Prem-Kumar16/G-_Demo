#include <iostream>

using namespace std;

int main()
{
	int n, first, last;

	cout << "Enter any number to find the sum of it's first and last digits" << endl;
	cin >> n;

	last = n%10;
	first = n;

	for ( first = n; first >= 10; first = first/10 );

	cout << "The first digit of the number is " << first << endl;
	cout << "The last digit of the number is " << last << endl;
	cout << "The sum of first & last digit is " << first+last << endl;

	return 0;

}
