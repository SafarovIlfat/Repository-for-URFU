#include <iostream>
using namespace std;

int main()
{
    for (int i{ 1000 }; i < 10001; i++)
    {
        int d = i % 10;
        int c = (i / 10) % 10;
        int b = (i / 100) % 10;
        int a = (i / 1000);
        if (a + b + c + d == 15)
        {
            cout << i << " ";
        }
    }
}