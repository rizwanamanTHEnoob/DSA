#include <iostream>
using namespace std;
void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minPosition = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[minPosition] > arr[j])
            {
                minPosition = j;
            }
        }
        swap(arr[minPosition], arr[i]);
    }
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << ' ';
}
int main()
{
    int arr[] = {2, 3, 1, 4, 5};
    selectionSort(arr, 5);
    printArray(arr, 5);
}