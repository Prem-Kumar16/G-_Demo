#include <iostream>

using namespace std;

int main()
{

	int base, power;

	cout << "Enter base value : ";
	cin >> base;

	cout << "Enter power value : ";
	cin >> power;

	int total =1 ;

	for ( int i = 1 ; i <= power; i++ )
	{
		total *= base;
	}

	cout << "The result is : " << total << endl;

	return 0;

} 
