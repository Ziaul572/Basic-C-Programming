#include<stdio.h>
int main()
{
    int i, n, arr[100];
    printf("Enter numbers of elements.\n");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int count = 0;
    for(i = 0; i < n; i++){
        if(arr[i] < arr[i + 1]){
            count++;
            if(arr[i] >= arr[i + 1]){
                break;
            }
        }
    }
    printf("numbers in increasing order are %d ", count);
}
