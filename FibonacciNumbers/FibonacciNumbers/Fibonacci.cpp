#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int counter = 0;
	int temp = 0;
	int firstNumber = 0;
	int secondNumer = 1;
	do {
		if (secondNumer % 2 == 0)
		{
			counter  += secondNumer;

		}
		temp = firstNumber + secondNumer;
		firstNumber = secondNumer;
		secondNumer = temp; 
		
	} while (counter < 4000000);
	
	cout << counter; 
}