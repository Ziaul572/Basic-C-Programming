#include<stdio.h>
#include<math.h>
int main()
{
    int arr[100];
    int i, j, n, temp;
    printf("Enter Number of Test Cases.\n");
    scanf("%d", &n);
    printf("Enter Marks.\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    //int max = arr[0];
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(arr[j] <= arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    /*for(i = 0; i < n; i++){
        printf("%d", arr[i]);
    } */
    int q;
    q = ceil(n * .10) - 1;
    printf("Minimum Mark for top 10Percent pos  = %d.",arr[q]);
}
