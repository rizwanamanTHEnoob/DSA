#include <bits/stdc++.h>
using namespace std;
void countingSort(int arr[], int size)
{
    int largest = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        largest = max(largest, arr[i]);
    }

    int count[largest + 1];
    for (int i = 0; i < size; i++)
    {
        count[arr[i]]++;
    }
    int j = 0;
    for (int i = 0; i <=largest; i++)
    {
        while (count[i] > 0 and j<size)
        {
            arr[j] =i;
            j++;
            count[i]--;
        }
    }
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }
}
int main()
{
    int arr[] = {1, 4, 1, 3, 2, 4, 3, 7};
    countingSort(arr, 8);
    printArray(arr, 8);
}