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
    int* p1 = arr;
    int* p2 = arr + n - 1;
    while (p1 < p2)
    {
        int temp = *p1;
        *p1 = *p2;
        *p2 = temp;
        p1++;
        p2--;
    }
    cout << "��������������� ������: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}