#include<stdio.h>
int main()
{
    int i, n, arr[100], range;
    printf("Enter number of elements.\n");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int max = arr[0], min = arr[0];
    for(i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        else if (arr[i] < min){
            min = arr[i];
        }
    }
    range = max - min;
    printf("Max value = %d.\nMin value = %d.\nRange = %d", max, min, range);
}
