#include<stdio.h>

int main()
{
    int arr[10][10];
    int i, j, max, p, q, n, m;
    printf("Enter Matrix Format.\n");
    scanf("%d %d", &n, &m);
    printf("Enter the values.\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
            //printf("\n");
        }
    }
    max = arr[0][0];
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            if (arr[i][j] >= max)
            {
                max = arr[i][j];
                p = i;
                q = j;
            }
        }
    }
    printf("The max Value is %d in (%d - %d).\n", max, p + 1, q + 1);

}
