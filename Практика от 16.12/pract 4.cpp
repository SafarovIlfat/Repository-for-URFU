#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "¬ведите размер массива: ";
    cin >> size;
    int* arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = i * i;
    }
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << "—умма элементов массива: " << sum;
    delete[] arr;
}