#include<stdio.h>
int main()
{
    int Num,i;
    scanf("%d",&Num);
    printf("The number of odd factor are ");
    for(i=1;i<=Num;i=i+2)
    {
        if(Num%i==0){
             printf("%d ",i);
        }
    }

}
