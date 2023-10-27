#include <iostream>
using namespace std;

int main()
{
	cout << "¬ведите 3-значное число";
	int n;
	cin >> n;
	int a = n % 10;
	int b = (n / 10) % 10;
	int c = ((n / 10) / 10) % 10;
	cout << a * b * c;
}