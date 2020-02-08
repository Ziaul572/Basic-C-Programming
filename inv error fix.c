#define principal 5000.00
#define period 10
#include<stdio.h>
main()
{
   int year;
   float amount,value,inrate;
   amount=principal;
   inrate=0.11;
   year=0;
     while(year<=period)
     {
         printf("%2d %8.2f\n",year,amount);
         value=amount+inrate*amount;
         year=year+1;
         amount=value;
     }
     return 0;
}
