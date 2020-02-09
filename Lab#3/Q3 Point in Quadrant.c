#include<stdio.h>
int main()
{
   int i,a,b,z,y,g,h;
   z=y=g=h=0;
   for(i=1;i<=3;i++){
    scanf("%d%d",&a,&b);
    if(a>0&&b>0){
       z=z+1;
    }
    else if(a<0&&b>0){
        y=y+1;
    }
    else if(a<0&&b<0){
        g=g+1;
    }
    else if(a>0&&b<0){
        h=h+1;
    }
   }
   printf("There are %d points in 1st quadrant\nThere are %d points in 2nd quadrant\nThere are %d points in 3rd quadrant\nThere are %d points in 4th quadrant",z,y,g,h);
}

