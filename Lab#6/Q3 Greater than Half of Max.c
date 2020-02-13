#include<stdio.h>
#include<math.h>
int main()
{
    int i, n, arr[100];
    printf("Enter numbers of elements\n");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    float max = arr[0];
    for(i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    int count = 0;
    for(i = 0; i < n; i++){
        if(arr[i] > max / 2){
            count++;
        }
    }
    printf("%d numbers are Greater than Half of Max.\n", count);
}
