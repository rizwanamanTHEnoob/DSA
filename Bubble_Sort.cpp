#include <iostream>
using namespace std;
//Bubble Sort In Worst Case O(N^2)
//Bubble Sort In Best Case O(N): if the array is sorted
void bubbleSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int swaps = 0;
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swaps++;
            }
        }
        if (swaps == 0)
            break;
    }
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << ' ';
}
int main()
{
    int arr[] = {1,2,3,4,5};
    bubbleSort(arr, 5);
    printArray(arr, 5);
}