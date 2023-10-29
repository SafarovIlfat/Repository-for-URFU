#include <iostream>
using namespace std;

int main()
{
    int s[] = { 1,2,3,4,5 };
    int count1 = 0;
    int count2 = 0;
    for (int i{ 0 }; i < 5; i++)
    {
        if (s[i] > 0)
        {
            count1 += 1;
        }
        if (s[i] < 0)
        {
            count2 += 1;
        }
    }
    cout << count1 << " положительных, " << count2 << " отрицательных ";
}