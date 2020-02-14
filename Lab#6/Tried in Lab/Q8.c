#include<stdio.h>
int main()
{
    int arr[100], i, n, count = 0;
    float sum = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++){
        sum = sum + arr[i];
    }
    float avg;
    avg = sum / n;
    for(i = 0; i < n; i++){
        if(arr[i] <= avg + (avg *.1) && arr[i] >= avg - (avg* .1)){
            count++;
        }
    }
    printf("number = %d", count);
}
