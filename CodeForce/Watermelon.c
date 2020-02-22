#include<stdio.h>
int main()
{
    int n, p, q, r;
    scanf("%d", &n);
    if(n == 2)
    {
        printf("NO");
        return 0;
    }
    if(n % 2 == 0)
    {
        p = n / 2;
        q = n / 3;
        r = n / 5;
        if (p % 2 == 0 || q % 2 == 0 || r % 2 == 0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        printf("NO");
    }
}
