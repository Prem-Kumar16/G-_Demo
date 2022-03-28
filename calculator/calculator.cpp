#include <iostream>

using namespace std;

float calc ( int n1, int n2, int opt ); 

int main()
{
	int num1, num2;

	cout << "Enter any two numbers to do the math" << endl;
	cin >> num1 >> num2;
	
	int option;

	cout << "Calculator menu" << endl;
	cout << "-> 1. Addition" << endl;
	cout << "-> 2. Subtraction" << endl;
	cout << "-> 3. Multiplication" << endl;
	cout << "-> 4. Division" << endl;

	cout << "/nEnter any option" << endl;
	cin >> option;

	cout << "The result is " <<  calc(num1, num2, option) << endl;

	return 0;

}

float calc ( int n1, int n2, int opt )
{
	int result = 0;

	switch(opt)
	{
		case 1:
			result = n1+n2;
			break;
		case 2:
			result = n1-n2;
			break;
		case 3:
			result = n1*n2;
			break;
		case 4:
			result = n1/n2;
			break;
		default:
			cout << "Invalid option" << endl;
	}

	return result;
} 
