//Project Euler
//find the sum of all multiples of 3 and 5 below 1000
#include <iostream>
using namespace std; 
int main()
{
	int add = 0; 
	int arr[1000];
	for (int i = 0; i < 1000; i++)
	{
		arr[i] = i; 
	}
	for (int i = 0; i < 1000; i++)
	{
		if (arr[i] % 3 == 0 || arr[i] % 5 == 0)
		{
			add += arr[i];
		}
	}

	cout << add << endl; 
}