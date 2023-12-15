#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Введите размер массива: ";
    cin >> n;
    int arr[n];
    cout << "Введите элементы массива: ";
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
    cout << "Количество элементов, отличных от последнего: " << count;
}