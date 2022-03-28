#include <iostream>
#include <math.h>

using namespace std;

int main()
{

	int num, sq = 0;

	cout << "Enter any number to find the square root of it : ";
	cin >> num;
	sq = sqrt(num);

	cout << "The square root of " << num << " is " << sq << endl;

	return 0;

} 
