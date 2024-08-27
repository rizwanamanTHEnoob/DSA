#include <iostream>
using namespace std;
void trappingRainwater(int arr[], int size)
{
    int leftMaxArray[size];
    int rightMaxArray[size];
    leftMaxArray[0] = arr[0]; // 4,2,0,6,3,2,5
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > leftMaxArray[i - 1])
        {
            leftMaxArray[i] = arr[i];
        }
        else
        {
            leftMaxArray[i] = leftMaxArray[i - 1];
        }
    }
    rightMaxArray[size - 1] = arr[size - 1];
    for (int i = size - 2; i >= 0; i--)
    {
        if (arr[i] > rightMaxArray[i + 1])
        {
            rightMaxArray[i] = arr[i];
        }
        else
        {
            rightMaxArray[i] = rightMaxArray[i + 1];
        }
    }
    int totalTrappedWater = 0;
    for (int i = 0; i < size; i++)
    {
        totalTrappedWater += min(leftMaxArray[i], rightMaxArray[i]) - arr[i];
    }
    cout << "Total Trapped Water: " << totalTrappedWater << endl;
}
int main()
{
    int arr[] = {4, 2, 0, 6, 3, 2, 5};
    trappingRainwater(arr, 7);
}