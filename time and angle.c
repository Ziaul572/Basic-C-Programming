#include<stdio.h>
int main()
{
    int h,m,mPos;
    float hPos,angle;
    printf("Insert the hour and minutes\n");
    scanf("%d%d",&h,&m);
    hPos=(h*30)+(m*0.5);
    mPos=m*6;
    angle=hPos-mPos;
    printf("the angle of the clock hand is %.2f",angle);
    return 0;
}
