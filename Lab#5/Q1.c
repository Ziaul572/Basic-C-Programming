#include<stdio.h>
int main()
{
    int totalS, hour, minute, second;
    printf("Enter the time spent in seconds.\n");
    scanf("%d", &totalS);
      hour = totalS / 3600 ;
    totalS = totalS % 3600 ;
    minute = totalS / 60   ;
    second = totalS % 60   ;
    printf("%02d : %02d : %02d", hour, minute, second);
}
