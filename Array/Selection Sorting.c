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
    for(a = 0; a < n - 1; a++)
    {
        min = arr[a];
        p = a;
        for(j = a + 1; j < n ; j++)
        {
            if(arr[j] < min)
            {
                min = arr[j];
                // printf("%d", min);
                p = j;
                //Index Number Position..
            }
        }
        t = arr[a];
        arr[a] = arr[p];
        arr[p] = t;
    }
    int c;
    for(c = 0; c < n; c++)
    {
        printf("%d\t", arr[c]);
    }
    //printf("%d ", t);
}
