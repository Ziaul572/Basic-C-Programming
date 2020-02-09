#include<stdio.h>
int main()
{
    int a,b,i,gcd=0;
    printf("Enter two values.\n");
    scanf("%d%d",&a,&b);
    for(i=2;i<a;i++)
    {
        if(a%i==0&&b%i==0){
       gcd=i;
        }
    }
    printf("GCD=%d",gcd);
}
