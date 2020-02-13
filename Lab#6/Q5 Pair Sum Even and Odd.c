#include<stdio.h>
int main()
{
    int n, i, arr[100], sum = 0;
    printf("Enter number of elements.\n");
    scanf("%d", &n);
    printf("Enter values.\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int even = 0, odd = 0;
    for(i = 0; i < n - 1; i++){
        if((arr[i] + arr[i + 1]) % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("Pair Summation Even are %d \nPair Summation Odd are %d", even, odd);
}
