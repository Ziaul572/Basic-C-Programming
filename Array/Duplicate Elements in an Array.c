#include<stdio.h>
int main()
{
    int arr[100], i, n;
    printf("Enter the number of Elements.\n");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", & arr[i]);
    }
    int count = 0;
    for(i = 0; i < n - 1; i++){
        if(arr[i] == arr[i+1]){
            count++;
        }
    }
    printf("The number of Duplicate Elements is %d ", count);
}
