#include<stdio.h>
int main()
{
    int Num,i,ans=0;
    printf("Enter an integer value.\n");
    scanf("%d",&Num);
    for(i=1;i<Num;i++)
    {
        if(Num%i==0&&Num%(i+1)==0){
            ans=i;
        }
    }
    printf("The Consecutive factors are %d and %d",ans,ans+1);
}
