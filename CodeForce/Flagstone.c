#include<stdio.h>
#include<math.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main()
{
    unsigned long int l, w, flagStones;
    float n;
    //printf("Enter the length and width of the room\n");
    scanf("%lu %lu %f", &l, &w, &n);
    flagStones = ceil(l / n) * ceil(w / n);
    printf("%lu", flagStones);
    return 0;
//    1000000000000000000
}
