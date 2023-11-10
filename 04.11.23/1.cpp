#include <iostream>
using namespace std;

int main()
{
    cout << "¬веди n";
    int n;
    cin >> n;
    cout << "¬веди k";
    int k;
    cin >> k;
    int sum = 0;
    for (int i{ 0 }; i < n + 1; i++)
    {
        sum += i * k;
    }
    cout << sum;
}