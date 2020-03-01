#include<stdio.h>
int main()
{
    int i, n, arr[100];
    printf("Enter number of elements.\n");
    scanf("%d", &n);
    printf("Enter the values.\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int temp, b, j;
    for(b = 0; b < n; b++)
    {
        for(j = 0; j < n - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    int c;
    for(c = 0; c < n; c++)
    {
        printf("%d ", arr[c]);
    }
}
