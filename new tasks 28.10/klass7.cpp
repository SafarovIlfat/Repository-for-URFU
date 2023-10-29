#include <iostream>
using namespace std;

int main()
{
    int s[] = { 1,2,3,4,5 };
    int count = 0;
    for (int i{ 0 }; i < 5; i++)
    {
        if (s[i] > 0)
        {
            count += 1;
        }
    }
    cout << count;
}