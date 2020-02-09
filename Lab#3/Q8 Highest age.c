#include<stdio.h>
int main()
{
    int number,i,Age,sum=0,Highest=0;
    float Avg;
    printf("insert number of people\n");
    scanf("%d",&number);
    for(i=1;i<=number;i++){
        printf("Age\n");
        scanf("%d",&Age);
            if(Age>Highest){
                Highest=Age;}
           sum=sum+Highest;
        }
    Avg=sum/number;
    printf("The Average %.2f \nThe Highest Age %d",Avg,Highest);
}
