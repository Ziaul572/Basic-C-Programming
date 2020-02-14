#include<stdio.h>
#include<math.h>
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
        if(arr[i] < (max / 2.0) ) {
            count++;
        }
    }
    printf("%d numbers are less than half of max.\n", count);
}
