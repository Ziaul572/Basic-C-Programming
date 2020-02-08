#include<stdio.h>
int main()
{
    int a,b,p,q;
    p=q=0;
    for (a=1;a<=3;a=a+1)
    {
        scanf("%d",&b);
        if(b>=60){
            printf("pass\n");
            p=p+1;
        }
        else {
            printf("fail\n");
            q=q+1;
        }
    }
    printf("total %d\nfail %d",p,q);
}
