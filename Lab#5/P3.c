#include<stdio.h>
int main()
{
    int i, num, sum = 0;
    printf("Enter amount of numbers.\n");
    scanf("%d",&num);
    int input[num];
    for(i = 1;i <= num; i++){
        scanf("%d",&input[i]);
    }
    //printf("The numbers are \n");
    for(i = 1; i <= num ; i++){
        sum = sum + input[i];
    }
    printf("Summation = %d ", sum);
}

