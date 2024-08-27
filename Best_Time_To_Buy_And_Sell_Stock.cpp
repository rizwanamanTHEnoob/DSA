#include <iostream>
using namespace std;
void sellStock(int arr[], int size)
{
    int mini = INT_MAX;
    int profit = 0;
    for (int i = 0; i < size; i++)
    {
        mini = min(mini, arr[i]);
        profit = max(profit, arr[i] - mini);
    }
    cout << "Maximum Profit Will Be: " << profit << endl;
}

int main()
{
    int stock[] = {7, 1, 5, 3, 6, 4};
    sellStock(stock, 6);
}