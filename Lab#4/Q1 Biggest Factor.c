#include<stdio.h>
int main()
{
    int i,a,b=0;
    printf("Enter a integer value.\n");
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {
        if (a%i==0){
            b=i;
        }
    }
    printf("The biggest proper function is %d",b);
}
