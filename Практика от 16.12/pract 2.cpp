#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int r, c;
    cout << "������� ���������� ����� � �������� �������: ";
    cin >> r;
    cin >> c;
    int** arr = new int* [r];
    srand(time(0));
    for (int i = 0; i < r; i++)
    {
        arr[i] = new int[c];
        for (int j = 0; j < c; j++)
        {
            arr[i][j] = rand() % 100;
        }
    }
    cout << "�������� ��������������� ��������� ������: ";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
    for (int i = 0; i < r; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
}