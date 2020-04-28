#include<stdio.h>
#include"FunctionHeader.h"

int main(){
    int arr[50];
    int i, m, n;
    printf("Enter Number of Elements.\n");
    scanf("%d", &n);
    for(i = 0; i < n ; i++){
        scanf("%d", &arr[i]);
    }
    m = MaxValue(arr, n);
    printf("Maximum Number = %d", m);
    //printf("%d", arr[3]);
}
