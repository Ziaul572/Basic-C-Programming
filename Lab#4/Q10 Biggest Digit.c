#include<stdio.h>
#include<math.h>
int main()
{
    int num, i, a = 0, count = 0;
    scanf("%d", &num);

    if(num < 0){
        num = num * -1;
    } else if(num == 0){
        count = count + 1;
    }
    for(i = 0; num > 0 ; i++)
    {
        a = num % 10;
        num = num / 10;
        count = i + 1;
    }
    printf("%d", count);
}
