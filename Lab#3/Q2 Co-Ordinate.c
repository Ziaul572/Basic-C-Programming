#include<stdio.h>
int main()
{
  int i,a,b,z;
  z=0;
  for(i=1;i<=3;i++)
  {
      scanf("%d%d",&a,&b);
      if(a>0&&b>0){
        z=z+1;
      }
  }
  printf("%d",z);
}

