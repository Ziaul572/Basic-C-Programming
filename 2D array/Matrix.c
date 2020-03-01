#include<stdio.h>
int main()
{
    int matrxA[3][3] = {{4, 6, 8},
                       {3, 5, 7},
                       {1, 2, 4}};
    int matrxB[3][3] = {{3, 9, 1},
                       {2, 6, 4},
                       {5, 4, 7}};
    int i, j, matrxSum[3][3];
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
        matrxSum[i][j] = matrxA[i][j] + matrxB[i][j];
    }
    }
    printf("Matrix Summation :\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%10d ", matrxSum[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int matrxSubstrct[3][3];
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            matrxSubstrct[i][j] = matrxA[i][j] - matrxB[i][j];
        }
    }
    printf("Matrix Subtraction :\n");
    for( i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%10d ",matrxSubstrct[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int matrxMultply[3][3];
    for( i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            matrxMultply[i][j] = matrxA[i][j] * matrxB[i][j];
        }
    }
    printf("Matrix Multiplication :\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%10d ", matrxMultply[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int TransPoseMatrxA[3][3];
    printf("Transpose of Matrix A :\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            TransPoseMatrxA[j][i] = matrxA[i][j];
        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
        printf("%10d ", TransPoseMatrxA[i][j]);
    }
    printf("\n");
    }
    printf("\n");
}
