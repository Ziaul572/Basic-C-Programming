#include<stdio.h>
int main()
{
    int i, n;
    printf("Enter number of input.\n");
    scanf("%d", &n);
    int sum[n];
    printf("Enter the input values.\n");
    for(i = 1; i <= n; i++){
        scanf("%d", &sum[i]);
    }
    printf("The Values are ");
    for(i = 1; i <= n; i++){
    printf("%d ", sum[i]);
    }
}
