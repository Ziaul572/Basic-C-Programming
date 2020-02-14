#include<stdio.h>
int main()
{
    int n, i, arr[100], count = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n-1; i++){
        if(arr[i] < arr[i+1]){
            count++;
            if(arr[i] > arr[i+1]){
                break;
            }
        }
    }
    printf("increasing number is %d ",count);
}
