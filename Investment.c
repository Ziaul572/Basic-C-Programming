#define principal 5000.00
#define period 10
main()
{
  int year;
  float amount, value, inrate;
    amount= principal;
    year=0;
    inrate=0.11;
    while(year <= period)
    {
       printf("%2d %8.2f\n", year,amount);
       value=(amount+inrate*amount);
       year =year +1;
       amount=value;
    }
}
