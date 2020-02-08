#include<stdio.h>
int main()
{
    int i ;
    float sum[10], value, total;
    printf("Enter 10 Real Numbers.\n");
    for(i=0; i<10; i++){
        scanf("%f",&value);
        sum[i]= value;
    }
    total = 0.0;
    for(i=0; i<10; i++){
        total = total + (sum[i]*sum[i]);
    }
    printf("\n");
    for(i=0; i<10; i++){
        printf("sum[%2d] = %5.2f\n", i+1, sum[i]);
    }
    printf("\nTotal Sum = %5.2f\n",total);
}
