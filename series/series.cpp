#include <iostream>

using namespace std;

void calc (int n);

int main()
{

	int n;
	cout << "Provide a number to find the series output" << endl;
	cin >> n ;

	calc (n);
	return 0;
}

void calc( int n)
{
	int total = 0;
	for( int i = 1; i <= n; i++ )
	{
		for (int j = 1; j <= i; j++ ) 
		{
			total += j;
		}
	}
	cout << "The total value is " << total << endl;
}
