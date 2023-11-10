#include <iostream>
using namespace std;

int main()
{
    cout << "number:";
    int a;
    cin >> a;
    if (((a % 2 == 0) || (a % 3 == 0)) && (a > 3))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

}