#include<stdio.h>
int main()
{
    int num[8], i, ans = 0;
    printf("Enter the given 8 digits.\n");
    for(i = 1; i <= 8; i++){
        scanf("%d", &num[i]);
    }
    for(i = 2; i < 8 ; i++){
        if( num[1] < num[i] && num[8] > num[i]){
            ans++;
        }
    }
    printf("The number of digit between the first and last digit is %d",ans);
}
