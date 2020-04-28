#include<stdio.h>
#include"FunctionHeader.h"

int main(){
    int i, arr[100], n;
    float avg;
    printf("Enter the number elements.\n");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    avg = Average(arr , n);
    printf("The Average is = %f\n", avg);
}
