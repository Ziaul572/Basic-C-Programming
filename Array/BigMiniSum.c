
#include <math.h>

#include <stdio.h>

//#include <sys/select.h>

int main()
{
    int i, n, p, q, min = 0, max = 0;
    int arr[100];
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] > max){
            max = arr[i];
            p = i;
        }
        if(arr[i] < min){
            min = arr[i];
            q = i;
        }
    }
      int j, minSum = 0, maxSum = 0;
    for(j = 0; j < n; j++){
     minSum = minSum + arr[j] ;
     maxSum = maxSum + arr[j] ;
    }
    printf("%d %d", minSum - arr[p], maxSum - arr[q]);
}
