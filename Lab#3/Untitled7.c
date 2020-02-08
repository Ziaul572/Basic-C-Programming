#include<stdio.h>
int main()
{
    int i,a,sum;
    scanf("%d",&a);

    for(i=1; i<=a; i++)
    {
        if(a%i==0)
        {
            sum = sum + i;

        }
    }
    printf("%d",sum);
}

