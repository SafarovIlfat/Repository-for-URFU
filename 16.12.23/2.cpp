#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "������� ������ �������: ";
    cin >> n;
    int arr[n];
    cout << "������� �������� �������: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int* a = arr;
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (*(a + i) != arr[n - 1])
        {
            count++;
        }
    }
    cout << "���������� ���������, �������� �� ����������: " << count;
}