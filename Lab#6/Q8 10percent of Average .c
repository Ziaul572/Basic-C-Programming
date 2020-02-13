#include<stdio.h>
int main()
{
    int i, n, arr[100], count = 0;
    printf("Enter numbers of elements.\n");
    scanf("%d", &n);
    float sum = 0;
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    float avg;
    avg = sum / n;
    for(i = 0; i < n; i++){
        if(arr[i] >= avg - (avg * .1) && arr[i] <= avg + (avg * .1)){
            count++;
        }
    }
    printf("Average near 10percent are %d ", count);
}
