#include<stdio.h>
int main()
{
    int totalS, hour, minute, second, count = 0, i;
    printf("Enter the time spent in seconds.\n");
    scanf("%d", &totalS);
      hour = totalS / 3600 ;
    totalS = totalS % 3600 ;
    minute = totalS / 60   ;
    second = totalS % 60   ;
    if(hour > 12){
    for( ; ; ){
      hour = hour - 12;
      count++;
      if (hour <= 12){
        break;
      }
    }
    }
    if(count % 2 == 0) {
    printf("\n%02d : %02d : %02d AM", hour, minute, second);
    }
    else {
            printf("\n%02d : %02d : %02d PM", hour, minute, second);
         }
}
