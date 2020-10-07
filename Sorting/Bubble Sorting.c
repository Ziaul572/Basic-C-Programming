#include<stdio.h>
int main()
{
    int i, n = 5;
    long long int arr[100];
   // printf("Enter number of elements.\n");
   // scanf("%d", &n);
   // printf("Enter the values.\n");
    for(i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
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
    long long int sum = 0;
    for(c = 0; c < n; c++)
    {
        sum = sum + arr[c];
    }
    printf("%lld %lld",sum - arr[n - 1], sum - arr[0]);
}
