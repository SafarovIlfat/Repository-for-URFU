#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int n;
    cout << "Введите размер массива: ";
    cin >> n;
    int* arr = new int[n];
    srand(time(0));
    cout << "Случайно сгенерированный массив: ";
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;
    return 0;
}