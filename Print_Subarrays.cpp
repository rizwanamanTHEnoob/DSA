#include <iostream>
using namespace std;
void printSubarrays(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int start = i;
        for (int j = start; j < size; j++)
        {
            int end = j;

            for (int k = start; k <= end; k++)
            {
                cout << arr[k] << ' ';
            }
            cout << endl;
        }
        cout << endl;
    }
}
int main()
{
    int arr[] = {2, 4, 5, 6, 7, 8, 10};
    printSubarrays(arr, 7);
}