#include<stdio.h>
int main()
{
    int count = 0, i, n, arr[100];

    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        }
         int max = arr[0];
        for(i = 0; i < n; i++){
            if(arr[i] > max){
                max = arr[i];
            }
    }
    for(i = 0; i < n; i++){
        if(arr[i] > (max /2)){
            count++;
        }
    }
    printf("%d numbers are greater than half of max.\n", count);
}
