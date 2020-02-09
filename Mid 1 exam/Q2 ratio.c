#include<stdio.h>
int main()
{
    float pAge, mAge;
    float ratio;
    printf("Enter 2 ages.\n");
    scanf("%d%d", &pAge, &mAge);
    ratio = pAge / mAge ;
    printf("The ratio is = %.3f",ratio);
}
