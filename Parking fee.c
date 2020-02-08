#include<stdio.h>
#include<math.h>
int main()
{
    int m,amount;
    printf("Enter the time spent in the parking lot.\n");
    scanf("%d",&m);
    amount= ceil(m/20.0)*30;
    printf("The total cost is %d \n",amount);
    return 0;
}
