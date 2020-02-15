#include<stdio.h>
#include<math.h>
int main()
{
    int l, w, flagStones;
    float n;
    //printf("Enter the length and width of the room\n");
    scanf("%d %d %f", &l, &w, &n);
    flagStones = ceil(l / n) * ceil(w / n);
    printf("%d", flagStones);
    return 0;
}
