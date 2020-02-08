#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Insert three sides of a triangle.\n");
    scanf("%d%d%d",&x,&y,&z);
    if(x+y>z && y+z>x && z+x>y)
    {
        printf("Yes its a triangle.\n");
    }
    else
    {
        printf("No its not a triangle.\n");
    }
    return 0;
}
