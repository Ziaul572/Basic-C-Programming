#include<stdio.h>
int main()
{
    int x,y,z,p;
    printf("Enter three values\n");
    scanf("%d%d%d",&x,&y,&z);
    if(x>=y && x>=z)
    {
        p=2*x;
    }
    else if(y>=z && y>=x)
    {
        p=2*y;
    }
    else if(z>=x && z>=y)
    {
        p=2*z;
    }
    printf("The double of the biggest number is %d\n\n",p);
    return 0;
}
