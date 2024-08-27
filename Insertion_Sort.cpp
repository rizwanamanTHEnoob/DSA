#include <iostream>
using namespace std;
void insertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int current = arr[i];
        int previous = i - 1;
        while (previous >= 0 and arr[previous] > current)
        {
            arr[previous + 1] = arr[previous];
            previous--;
        }
        arr[previous + 1] = current;
    }
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << ' ';
}
int main()
{
    int arr[] = {5, 4, 1, 3, 2};
    insertionSort(arr, 5);
    printArray(arr, 5);
}