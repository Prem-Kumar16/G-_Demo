#include <iostream>

using namespace std;

void table (int n);

int main()
{

	int num;
	cout << "Enter the number for which you need to know it's first 10 multiples" << endl;
	cin >> num;

	table(num);
	return 0;
}

void table (int n)
{

	for(int i = 0; i < 11 ; i++)
	{
		cout << n << " * " << i << " = " << (n*i) << endl;
	}
}
