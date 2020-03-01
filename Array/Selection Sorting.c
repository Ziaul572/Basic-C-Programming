//input an array .. sort the array.
#include<stdio.h>
int main()
{
    int arr[100], n, i;
    printf("Enter number of elements.\n");
    scanf("%d", &n);
    printf("Enter the values.\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min, j, p, t, a;
    for(i = 0; i < n - 1; i++)
    {
        min = arr[i];
        p = i;
        for(j = i + 1; j < n ; j++)
        {
            if(arr[j] < min)
            {
                min = arr[j];
                // printf("%d", min);
                p = j;
                //Index Number Position..
            }
        }
        t = arr[i];
        arr[i] = arr[p];
        arr[p] = t;
    }
    int c;
    for(i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    //printf("%d ", t);
}
