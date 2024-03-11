#include <stdio.h>

int determinant(int matrix[3][3], int n)
{
    int det = 0;
    int submatrix[3][3];
    if (n == 2)
    {
        return (matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]);
    }
    else
    {
        for (int x = 0; x < n; x++)
        {
            int subi = 0;
            for (int i = 1; i < n; i++)
            {
                int subj = 0;
                for (int j = 0; j < n; j++)
                {
                    if (j == x)
                    {
                        continue;
                    }
                    submatrix[subi][subj] = matrix[i][j];
                    subj++;
                }
                subi++;
            }
            det += (x % 2 == 0 ? 1 : -1) * matrix[0][x] * determinant(submatrix, n - 1);
        }
    }
    return det;
}

int main()
{
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int det = determinant(matrix, 3);
    printf("Determinant of the matrix: %d\n", det);
    return 0;
}
