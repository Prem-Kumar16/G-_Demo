#include <iostream>

using namespace std;

void harmonic ( int n );

int main()
{

	int n;
	cout << "Enter the value of n to find the result of harmonic series" << endl;
	cin >> n;

	harmonic (n);
	return 0;

}

void harmonic ( int n )
{
	float total = 0;

	for ( int i = 1; i <= n ; i++ )
	{
		total += (1/(float)i);
	}

	cout << " The value of the harmonic series for the value of " << n << " is " << total << endl;

}	 
