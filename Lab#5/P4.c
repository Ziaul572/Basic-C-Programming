#include<stdio.h>
int main()
{
    int i, n;
    printf("Enter number of input.\n");
    scanf("%d",&n);
    int boxA[n], boxB[n];
    for(i = 1; i <= n; i++){
        scanf("%d",&boxA[i]);
        boxB[i] = boxA[i];
    }
    for(i = 1; i <= n; i++){
        printf(" The elements of 1st array is \n %d \n The elements of 2nd array is %d",boxA[i],boxB[i]);
    }
}
