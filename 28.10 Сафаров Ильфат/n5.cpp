#include <iostream>
using namespace std;

int main()
{
	cout << "������� �����";
	int n;
	cin >> n;
	int count = 0;
	while (n != 0)
	{
		if ((n % 10) % 2 == 0)
		{
			count += 1;
			n = n / 10;
		}
		else
		{
			n = n / 10;
		}
	}
	cout << "������ ����:" << count;
}