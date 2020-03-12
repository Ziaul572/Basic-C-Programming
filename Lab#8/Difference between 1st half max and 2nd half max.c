#include<stdio.h>
#include<math.h>

int main()
{
    int arr[100];
    int i, n, p;
    printf("Enter Number of Test Case.\n");
    scanf("%d", &n);
    printf("Enter the Values.\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    if(n % 2 != 0)
    {
        p = ceil(n / 2.0);
    }
    else
    {
        p = n / 2;
    }
    int max = arr[0];
    int max2 = arr[p];
    for(i = 0; i < n; i++)
    {
        if(i < p)
        {
            if(arr[i] > max)
            {
                max = arr[i];
            }
        }
        else
        {
            if (arr[i] > max2)
            {
                max2 = arr[i];
            }
        }
    }
    // printf("%d %d", max, max2);
    int diff;
    diff = max - max2;
    printf("Difference Between 1st Half max and 2nd Half max = %d", diff);
}
