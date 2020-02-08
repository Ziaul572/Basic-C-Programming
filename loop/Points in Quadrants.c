#include<stdio.h>
int main()
{
    int i,a,b,x,w,y,z;
    x=y=z=w=0;
    for(i=1;i<=3;i++)
    {
        printf("Enter the co-ordinats.\n");
        scanf("%d%d",&a,&b);
        if(a>0){
            if(b>0){
                x=x+1;
            }else if(b<0){
                w=w+1;}
         }
         else if(a<0){
            if(b>0){
                y=y+1;
            }else if(b<0){
                z=z+1;}
         }
        }
        printf("There are %d points in 1st quadrant.\nThere are %d points in 2nd quarant.\nThere are %d points in 3rd quadrant.\nThere are %d points in 4th quadrant.\n",x,y,z,w);

    return 0;
}
