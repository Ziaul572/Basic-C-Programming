#include<stdio.h>
int main()
{
    int i, n, arr[100], sum = 0, evenSum = 0, oddSum =0;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    for(i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            evenSum = evenSum + arr[i];
        }
        else{
            oddSum = oddSum + arr[i];
        }
    }
    printf("%d\t%d\t%d", sum, evenSum, oddSum);
}
