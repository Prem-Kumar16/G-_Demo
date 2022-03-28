#include <iostream>

using namespace std;

int main()
{

	int num[10] = {0}, size, temp = 0, total = 0;
	float avg = 0;

	cout << "Enter the size of the numbers (should be below or equal to 10) : " ;
	cin >> size;

	cout << "Enter any " << size << " numbers" << endl;
	
	//For loop for inserting elements into array
	for (int i = 0; i<size; i++)
	{
		cin >> temp;
		num[i] = temp;
	}
	
	//For loop for seeing the elements present in the array
	for ( int i = 0; i < size ; i++)
	{
		cout << " element " << i << " : " << num[i] << endl;
	}
	
	//For loop for adding all the numbers in the num array
	for ( int j = 0; j < size; j++ )
	{
		total += num[j];
	}

	cout << "The total is " << total << endl;
	avg = total/size;
	cout << "The average of these " << size << " numbers are " << avg << endl;
	
	return 0;

} 
