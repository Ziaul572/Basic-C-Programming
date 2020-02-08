#include<stdio.h>
#include<math.h>
int main()
{
    int x,Ldigit,Rdigit,sum;
    printf("Enter a two digit number.\n");
    scanf("%d",&x);
    Ldigit=x/10;
    Rdigit=x%10;
    sum=Ldigit+Rdigit;
    printf("The addition of %d is=%d",x,sum);
    return 0;
}
