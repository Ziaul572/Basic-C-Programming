#include<stdio.h>
int main()
{
    int i,a,z=0;
    printf("Enter a integer value.\n");
    scanf("%d",&a);
    for(i=2;i<a;i++)
    {
        if(a%i==0){
            z++;}
    }
    if(z>0){
            printf("No.The number is not a prime.\n");
        }
        else{
             printf("Yes.The number is a prime.\n");
        }
    return 0;
}
