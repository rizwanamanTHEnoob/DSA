#include <iostream>
using namespace std;
void diagonalSum(int matrix[][3], int n)
{
    int primaryDiagonal = 0;
    int secondaryDiagonal = 0;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {

            if (row == col)
            {
                primaryDiagonal += matrix[row][col];
            }
            if (n % 2 == 1 && row == n / 2 && col == n / 2)
            {
                continue;
            }
            if (row + col == n - 1)
            {
                secondaryDiagonal += matrix[row][col];
            }
        }
    }
    cout << "Primary Diagonal Sum: " << primaryDiagonal << endl;
    cout << "Secondary Diagonal Sum: " << secondaryDiagonal << endl;
}
void diagonalSUM(int matrix[][3], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += matrix[i][i];
        if (i != n - 1 - i)
            sum += matrix[i][n - i - 1];
    }
    cout << "Total Diagonal Sum Is: " << sum << endl;
}
int main()
{
    int n = 4;
    int matrix[][4] =
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12},
            {13, 14, 15, 16}};
    int m = 3;
    int matrix2[][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    // diagonalSum(matrix2, m);
    diagonalSUM(matrix2, m);
    // diagonalSum(matrix, n);
}