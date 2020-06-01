#include<stdio.h>

int main()
{

    int *p, sum = 0, i;
    int x[5] = { 5, 9, 6, 3, 7};
    i = 0;
    // p = (int *) malloc(5 * sizeof(int));
    p = x;
    //p = &x[0];

    printf("Element    Value    Address\n\n");
    for(i = 0; i < 5; i++)
    {
        printf("\nIncrement of p = %d\n", p);
        printf("x[%d]       %d       %u\n",i, *p, p);
        sum = sum + *p;
        p++;
        //i++;

    }

    printf("\n Sum = %d \n", sum);
    printf("\n &x[0] = %u\n", &x[0]);
    printf("\n P = %u \n", p);
}
