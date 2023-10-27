#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int b = 0;
	for (int i{ 0 }; i < n + 1; i++)
	{
		b += i;
	}
	cout << b;
}