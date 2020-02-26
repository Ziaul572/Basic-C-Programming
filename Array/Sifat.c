#include<stdio.h>
int main ()
{
    int n, min, i, b, t, p, x[100];
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }
    for(i = 0; i < n - 1; i++)
    {
        min = x[i];
        for(b = i + 1; b < n; b++)
        {
            if(min > x[b])
            {
                min = x[b];
                p = b;
            }
        }
        t = x[i];
        x[i] = x[p];
        x[p] = t;

    }
    for(i = 0; i < n; i++)
    {
        printf("%d\n",x[i]);
    }
}
