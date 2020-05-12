#include<stdio.h>

int main()
{
    int n, i, sum = 0;
    int arr[100];
    freopen("DataFromTXT.txt", "r", stdin);
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    printf("%d", sum);
}
