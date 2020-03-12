#include<stdio.h>
int main()
{
    int arr[100];
    int i, j, n;
    printf("Enter number of Values.\n");
    scanf("%d", &n);
    printf("Enter the values.\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int c ;
    for(i = 0; i < n; i++)
    {
        c = 0;
        for(j = 1; j <= arr[i]; j++)
        {
            if(arr[i] % j == 0)
            {
                c++;
            }
        }
        printf("The Factors of %d is = %d\n", arr[i], c);
    }
}
