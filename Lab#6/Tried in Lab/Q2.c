#include<stdio.h>
int main()
{
    int  n, i, arr[100], range;
    int max = arr[0], min = arr[0];
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        else if(arr[i] < min ){
            min = arr[i];
        }
    }
    range = max - min;
    printf(" max = %d \nmin = %d \nrange = %d ", max, min, range);
}
