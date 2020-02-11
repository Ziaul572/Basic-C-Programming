#include<stdio.h>
int main()
{
    int arr[100], n, i;
    printf("Enter the number of Elements.\n");
    scanf("%d", &n);
    int sum = 0;
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    float avg, BigAvg;
    avg = sum / n;
    int BigSum = 0, count = 0;
    for(i = 0; i < n; i++){
        if(arr[i] > avg){
            BigSum = BigSum + arr[i];
            count++;
        }
    }
    BigAvg = BigSum /count;
    printf("The average of the number higher than Average is %.3f ", BigAvg);
}
