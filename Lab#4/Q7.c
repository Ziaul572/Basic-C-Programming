#include<stdio.h>
int main()
{
    int i,Num_1,Num_2,Multi=0;
    printf("Enter Two values for multiplication.\n");
    scanf("%d%d",&Num_1,&Num_2);
    for(i=1;i<=Num_1;i++)
    {
        //For multiplication without *.. Just ADD the number over and over again...//
        Multi=Multi+Num_2;
    }
    printf("The result of %d * %d = %d ",Num_1,Num_2,Multi);
}
