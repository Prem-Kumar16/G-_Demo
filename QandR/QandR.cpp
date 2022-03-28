#include <iostream>

using namespace std;

int main()
{

	int divisor, dividend;

	cout << "Enter the dividend : " ;
	cin >> dividend;
	cout << "Enter the divisor : ";
	cin >> divisor;

	cout << "The quotient is : " << dividend/divisor << endl;
	cout << "The reminderis : " << dividend%divisor << endl;

	return 0;

}   
