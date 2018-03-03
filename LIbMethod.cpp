#include <iostream>
#include <algorithm>
using namespace std;

void insertionSort(int* arr, int _size)
{
    for(int i = 1; i < _size; i++)
        for(int j = i; j > 0 && arr[j] < arr[j - 1]; j--)
            swap(arr[j], arr[j - 1]);
}

void input(int* arr, int _size)
{
    for (int i = 0; i < _size; i++)
        cin >> arr[i];
}

void output(int* arr, int _size)
{
    for (int i = 0; i < _size; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int size;
    cin >> size;

    int* arr = new int[size];
    input(arr, size);

    insertionSort(arr, size);
    output(arr, size);
    delete[] arr;
    return 0;
}