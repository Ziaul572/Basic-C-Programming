#include<stdio.h>
int main()
{
    int i,a,b;
    b=0;
    printf("\tEnter 8 integer Numbers.\n");
    for(i=1;i<=8;i++)
    {
        scanf("%d",&a);
        if (a%2==0){
            b++;
        }
    }
    printf("There are %d even numbers.\n",b);
    return 0;
}
