#include <iostream>
using namespace std;

int main()
{
    int s[] = { 1,2,3,4,5 };
    int max = 0;
    for (int i{ 0 }; i < 5; i++)
    {
        if (s[i] > max)
        {
            max = s[i];
        }
    }
    for (int i{ 0 }; i < 5; i++)
    {
        cout << s[i] / max;
    }
}