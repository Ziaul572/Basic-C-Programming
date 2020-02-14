#include<stdio.h>
int main()
{
    int arr[100], n, i, sum = 0, count = 0, countOdd = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n - 1; i++){
            sum = arr[i] + arr[i + 1];
      /* if(sum % 2 == 0){
        count++;
       }
       else{
        countOdd++;
       } */
        if((arr[i] + arr[i + 1]) % 2 == 0){
            count++;
        }
        else{
            countOdd++;
        }
    }
    printf("number of pair even sum is %d \nnumber of pair odd sum is %d", count, countOdd);
}
