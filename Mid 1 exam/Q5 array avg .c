#include<stdio.h>
int main()
{
    int i, n;
    printf("Enter element number.\n");
    scanf("%d", &n);
    int arr[n];
    float sum = 0, avg;
    printf("Enter values.\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    avg = sum / n;
    printf(" The average is %.3f", avg);
}
