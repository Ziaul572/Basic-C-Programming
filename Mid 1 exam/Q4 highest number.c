#include<stdio.h>
int main()
{
    int a, b, c, max;
    printf("Enter 3 integer values.\n");
    scanf("%d%d%d", &a, &b, &c);
    if(a >= b && a >= c){
        max = a;
    }
    else if(b >= a && b >= c){
        max = b;
    }
    else {
        max = c;
    }
    printf("The maximum value : %d",max);
}
