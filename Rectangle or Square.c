#include<stdio.h>
int main()
{
   int a,b,perimeter;
   printf("Insert the length and width\n");
   scanf("%d%d",&a,&b);
   if(a==b)
   {
       perimeter=4*a;
       printf("Its a square and its perimeter is %d",perimeter);
   }
   else
   {
       perimeter=2*(a+b);
       printf("Its a rectangle and its perimeter is %d",perimeter);
   }
   return 0;
}
