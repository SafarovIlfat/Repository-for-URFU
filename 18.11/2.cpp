#include <iostream> 
#include <math.h>

using namespace std;
int nod(int x, int y)
{
    if (y == 0)
        return x;
    return nod(y, x % y);
}
int main()
{
    int n;
    cout << "n = ";
    cin >> n;
    int m;
    cout << "m = ";
    cin >> m;
    n--;
    m--;
    cout << n + m - nod(n, m);
    return 0;
}