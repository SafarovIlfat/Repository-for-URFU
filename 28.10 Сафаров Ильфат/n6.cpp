#include <iostream>
using namespace std;

int main()
{
	cout << "Введите число";
	int n;
	cin >> n;
	int mx = 0;
	while (n != 0)
	{
		if ((n % 10) > mx)
		{
			mx = n % 10;
			n = n / 10;
		}
		else
		{
			n = n / 10;
		}
	}
	cout << "Наибольшая цифра:" << mx;
}