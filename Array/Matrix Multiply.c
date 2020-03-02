#include<stdio.h>
int main()
{
    int matrxA[3][3] = {{4, 6, 8},
                        {3, 5, 7},
                        {1, 2, 4}
    };
    int matrxB[3][3] = {{3, 9, 1},
        {2, 6, 4},
        {5, 4, 7}
    };
    int matrxMultiply[3][3], i, j, a = 0, b = 0, c = 0;
    int sum = 0;
    for(i = 0; i < 3; i++)
    {
        for(a = 0; a < 3; a++)
        {
            for(j = 0; j < 3; j++)
            {
                sum = sum + ( matrxA[i][j] * matrxB[j][a] );
            }
            //  printf("%d ", sum);
            matrxMultiply[i][a] = sum;
            sum = 0;
        }
    }
    printf("Matrix Multiplication :\n");
    for(i = 0; i < 3; i++)
    {
        for( j = 0; j < 3; j++)
        {
            printf("%10d ", matrxMultiply[i][j]);
        }
        printf("\n");
    }
    printf("\n");
//printf("%d", matrxMultiply[0][0]);
}
