#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "������� ������ �������: ";
    cin >> n;

    int arr1[n];
    int arr2[n];
    int arr3[n];

    cout << "������� �������� ������� �������: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    cout << "������� �������� ������� �������: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    int* m1 = arr1;
    int* m2 = arr2;
    int* m3 = arr3;

    for (int i = 0; i < n; i++)
    {
        *(m3 + i) = *m1 + *(m2 + n - 1 - i);
        m1++;
    }

    cout << "��������� �������� ��������� ��������:";
    for (int i = 0; i < n; i++)
    {
        cout << m3[i] << " ";
    }
}