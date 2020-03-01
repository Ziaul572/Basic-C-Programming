
#include <math.h>

#include <stdio.h>

//#include <sys/select.h>

int main()
{
    int i, n, p, q;
    int arr[100];
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = arr[0], min = arr[0];

    for( i = 0; i < n; i++){
         if(arr[i] > max){
            max = arr[i];
            p = i;
        }
        if(arr[i] < min){
            min = arr[i];
            q = i;
    }
      int j, minSum = 0, maxSum = 0;
    for(j = 0; j < n; j++){
     minSum = minSum + arr[j] ;
     maxSum = maxSum + arr[j] ;
    }
    printf("%d %d", minSum - arr[p], maxSum - arr[q]);
}
}
