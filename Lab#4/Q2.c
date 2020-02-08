#include<stdio.h>
int main()
{
    int i,a,b=0;
    printf("Enter a value.\n");
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {
        if(a%i==0){
        b=b+i;}
    }
    if(b==a){
        printf("The value is a perfect number.\n");
    }
    else{
        printf("The value is not a perfect number.\n");
    }
    return 0;
}
