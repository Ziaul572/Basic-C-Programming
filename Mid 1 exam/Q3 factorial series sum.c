#include<stdio.h>
int main()
{
    double i, sum = 1;
    for(i = 2; i <= 12; i = i +2){
        sum = sum * i * (i - 1);
    }
    printf("Summation = %lf ",sum);
}
