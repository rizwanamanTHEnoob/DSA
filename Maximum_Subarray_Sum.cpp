#include <iostream>
using namespace std;
// Brute Force O (Size*Size*Size)
void maxSum(int arr[], int size)
{
    int maxi = -1;
    int mini = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        int start = i;
        for (int j = start; j < size; j++)
        {
            int end = j;
            int sum = 0;
            for (int k = start; k <= end; k++)
            {
                sum += arr[k];
            }
            maxi = max(maxi, sum);
            mini = min(mini, sum);
        }
    }
    cout << maxi << ' ' << mini << endl;
}
// Maximum Subarray Sum Using Prefix Sum Technique
void MaximumSum(int arr[], int size)
{
    int prefix[size + 1];
    prefix[0] = 0;
    for (int i = 1; i <= size; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i - 1];
    }
    int maxSum = -1;
    for (int i = 1; i <= size; i++)
    {
        int start = i;
        for (int j = i; j <= size; j++)
        {
            int end = j;
            maxSum = max(maxSum, (prefix[end] - prefix[start - 1]));
        }
    }
    cout << maxSum << endl;
}
// Kadane's Algorithm For Maximum Subarray Sum O(n)
void Kadanes(int arr[], int size)
{
    int current = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        current += arr[i];
        if (current < 0)
        {
            current = 0;
        }
        maxSum = max(maxSum, current);
    }
    cout << maxSum << endl;
}
int main()
{
    int arr[] = {-5, 2, -1, 6, 10};
    Kadanes(arr, 5);
}