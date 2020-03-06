#include<stdio.h>
int main()
{
    int i, n, k, c = 0, d = 0;
  //  printf("Enter number of participant and the k-th placed points.\n");
    scanf("%d %d", &n, &k);
    int arr[100];
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++){
            if(arr[i] == 0){
                d++;
            }
        if (arr[i] >= arr[k]){
            c++;
        }
    }
    if(d == n){
        c = 0;
    }
    //printf(" Total participant passed to the next round is %d ", c);

    printf("%d", c);
}
