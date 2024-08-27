#include <iostream>
using namespace std;
void printSpiralMatrix(int matrix[][4], int row, int col)
{
    int startRow = 0;
    int startCol = 0;
    int endRow = row - 1;
    int endCol = col - 1;
    while (startRow <= endRow && startCol <= endCol)
    {
        // Top Part Of The Matrix
        for (int top = startCol; top <= endCol; top++)
        {
            cout << matrix[startRow][top] << ' ';
        }

        // Right Part Of The Matrix
        for (int right = startRow + 1; right <= endRow; right++)
        {
            cout << matrix[right][endCol] << ' ';
        }

        // Bottom Part Of The Matrix]
        for (int bottom = endCol - 1; bottom >= startCol; bottom--)
        {
            if (startRow == endRow)
                break;
            cout << matrix[endRow][bottom] << ' ';
        }

        // Left Part Of The Matrix
        for (int left = endRow - 1; left >= startRow + 1; left--)
        {
            if (startCol == endCol)
                break;
            cout << matrix[left][startCol] << ' ';
        }

        // Updation of the loop
        startRow++;
        startCol++;
        endRow--;
        endCol--;
    }
}
int main()
{
    int row = 4;
    int col = 4;
    int matrix[][4] =
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12},
            {13, 14, 15, 16}};
    printSpiralMatrix(matrix, row, col);
}