#include <iostream>
using namespace std;

int main()
{
    int s[] = { 1,2,3,4,5 };
    int max = 0;
    int min = 9999;
    int imax;
    int imin;
    for (int i{ 0 }; i < 5; i++)
    {
        if (s[i] > max)
        {
            max = s[i];
            imax = i;
        }
        if (s[i] < min)
        {
            min = s[i];
            imin = i;
        }
    }
    int a = s[imax];
    s[imax] = s[imin];
    s[imin] = a;
    for (int i{ 0 }; i < 5; i++)
    {
        cout << s[i] << " ";
    }
}