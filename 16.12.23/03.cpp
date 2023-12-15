#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int arr[3][3];
    srand(time(0));
    for (int i{ 0 }; i < 3; i++)
    {
        for (int j{ 0 }; j < 3; j++)
        {
            arr[i][j] = rand() % 91 + 10;
        }
    }
    cout << "";
    for (int i{ 0 }; i < 3; i++)
    {
        for (int j{ 0 }; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
    int MaxSum = 0;
    int StrNum = 0;
    for (int i{ 0 }; i < 3; i++)
    {
        int sum = 0;
        for (int j{ 0 }; j < 3; j++)
        {
            sum += arr[i][j];
        }
        if (sum > MaxSum)
        {
            MaxSum = sum;
            StrNum = i + 1;
        }
    }
    cout << "Максимальная сумма равна " << MaxSum << " в строке " << StrNum;
}