#include<stdio.h>
int main()
{
    int i, sum = 0, j = 1, t = 1;
    for(i = 2; i <= 12; i = i +2){
       for(j = 1; j <= i; j= j + 2){
        j = i * j *t;
        sum = sum + j;
        t++ ;
       }
    }
    printf("Summation = %d ",sum);
}
