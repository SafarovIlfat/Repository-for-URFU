#include <iostream>
using namespace std;

int main()
{
    int arr[3][3];
    cout << "������ 9 ��������� ������� ������� � ������� �������� ������ ������";
    for (int i{ 0 }; i < 3; i++)
    {
        for (int j{ 0 }; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i{ 0 }; i < 3; i++)
    {
        int sum = 0;
        for (int j{ 0 }; j < 3; j++)
        {
            sum += arr[i][j];
        }
        cout << "����� ��������� � ������ " << i + 1 << " = " << sum << ". ";
    }
    for (int j{ 0 }; j < 3; j++)
    {
        int sum = 0;
        for (int i{ 0 }; i < 3; i++)
        {
            sum += arr[i][j];
        }
        cout << "����� ��������� � ������� " << j + 1 << " = " << sum << ". ";
    }
}