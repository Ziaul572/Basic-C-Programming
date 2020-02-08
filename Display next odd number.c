#include<stdio.h>
int main()
{
    int x,y;
    printf("Insert any number.\n");
    scanf("%d",&x);
    if(x%2==0)
    {
        y=x+1;
    }
    else
    {
        y=x+2;
        printf("%d is the next odd number.",y);
    }
    return 0;
}
