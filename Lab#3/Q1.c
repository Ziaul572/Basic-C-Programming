#include<stdio.h>
int main()
{
   int x,a,p;
   p=0;
   for(x=1;x<=8;x++)
   {
       scanf("%d",&a);
       if(a%2==0){
        p=p+1;
       }
   }
   printf("\nTotal even number is=%d",p);

}

