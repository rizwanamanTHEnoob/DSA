#include <iostream>
using namespace std;
void stairCaseSearch(int matrix[][4], int key)
{
    int row = 0;
    int col = 3;
    while (row < 4 && col >= 0)
    {
        int cellValue = matrix[row][col];
        if (cellValue == key)
        {
            cout << "Key Found At (" << row << ',' << col << ')' << endl;
            return;
        }
        else if (key < cellValue)
        {
            col--;
        }
        else
        {
            row++;
        }
    }
    cout << "Key Not Found" << endl;
}
int main()
{
    int matrix[][4] =
        {
            {10, 20, 30, 40},
            {15, 25, 35, 45},
            {27, 29, 37, 48},
            {32, 33, 39, 50}};
    stairCaseSearch(matrix, 33);
}