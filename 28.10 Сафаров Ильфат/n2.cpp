#include <iostream>
using namespace std;

int main()
{
	for (int i{ 35 }; i < 88; i++)
	{
		if ((i % 7 == 1) || (i % 7 == 2) || (i % 7 == 5))
		{
			cout << i << " ";
		}
	}
}