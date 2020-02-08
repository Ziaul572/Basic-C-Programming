#include<stdio.h>
int main()
{
    int i,a,b=0,sum=0;
    printf("Enter a value.\n");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        b=a%10;
        a=a/10;
        sum=sum+b;
        if(a==0){
            break;
        }
    }
    printf("The summation is %d\n",sum);
}
