#include <iostream>
using namespace std;

int main()
{
    cout << "����� n";
    int n;
    cin >> n;
    cout << "����� k";
    int k;
    cin >> k;
    int sum = 0;
    for (int i{ 0 }; i < n + 1; i++)
    {
        sum += i * k;
    }
    cout << sum;
}