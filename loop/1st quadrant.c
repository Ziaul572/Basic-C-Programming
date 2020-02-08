#include<stdio.h>
int main ()
{
    int i,a,b,z;
    z=0;
    for(i=1;i<=3;i++)
    {
        printf("Insert a quadrant.\n");
        scanf("%d%d",&a,&b);
        if(a>0&&b>0){
            z=z+1;
        }
    }
    printf("There are %d points in the first quadrant.\n",z);
    return 0;
}
