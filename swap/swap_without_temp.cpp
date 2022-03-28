#include <iostream> 

using namespace std;

void swap(int num1, int num2);

int main()
{
	int num_1, num_2;
	cout << "Enter any two numbers for swapping" << endl;
	cin >> num_1 >> num_2 ;

	cout << "Values before swapping" << endl;
	cout << "A = " << num_1 << "\n"  << "B = " << num_2 << endl;

	cout << "Values after swapping " << endl; 
	//Function call for swap operation
	swap(num_1,num_2);
	return 0;
}

void swap (int num1, int num2)
{
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;

	cout << "A = " << num1 << "\n"  << "B = " << num2 << endl;
}
