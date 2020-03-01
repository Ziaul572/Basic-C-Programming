#include<stdio.h>
int main()
{
    int num[8], i, ans = 0;
    printf("Enter the given 8 digits.\n");
    for(i = 0; i < 8; i++){
        scanf("%d", &num[i]);
    }
    for(i = 0; i < 8 ; i++){
        if( num[0] < num[i + 1] && num[7] > num[i - 1]){
            ans++;
        }
    }
    printf("The number of digit between the first and last digit is %d",ans);
}
