#include<stdio.h>
int main()
{
    int i, num;
    printf("Enter amount of numbers.\n");
    scanf("%d",&num);
    int input[num];
    for(i = 1;i <= num; i++){
        scanf("%d",&input[i]);
    }
    printf("The numbers are \n");
    for(i = 1; i <= num ; i++){
        printf("%d ",input[i]);
    }
}
