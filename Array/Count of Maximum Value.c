#include<stdio.h>
int main()
{
    int arr[100], n, i;
    printf("Enter the number of Elements.\n");
    scanf("%d", &n);
    for(i = 0;i < n; i++){
        scanf("%d", & arr[i]);
    }
    int max;
    max = arr[0];
    for(i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
             }
        }
        int count = 0;
        for(i = 0; i < n; i++){
            if(max == arr[i]){
                count++;
            }
        }
        printf("The Maximum value is %d \n  and \n The number of The Maximum Value is %d . ", max, count);

}
