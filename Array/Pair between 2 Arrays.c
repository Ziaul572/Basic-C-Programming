//Pair between two Arrays.
#include<stdio.h>
int main()
{
    int n, m, arr1[100], arr2[100];
    printf("Enter the number of elements of the 1st Array.\n");
    scanf("%d", &n);
    printf("Enter the number of elements of the 2nd Array.\n");
    scanf("%d", &m);
    printf("Enter values of the 1st Array.\n");
    int i, j;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for(j = 0; j < m; j++)
    {
        scanf("%d", &arr2[j]);
    }
    //i = 0, j = 0;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            printf("( %d , %d ) ", arr1[i], arr2[j]);
        }
        printf("\n");
    }
}
