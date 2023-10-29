#include <iostream>
using namespace std;

int main()
{
    int s[] = { 1,2,3,4,5 };
    int max = 0;
    int min = 9999;
    for (int i{ 0 }; i < 5; i++)
    {
        if (s[i] > max)
        {
            max = s[i];
        }
        if (s[i] < min)
        {
            min = s[i];
        }
    }
    cout << max - min;
}