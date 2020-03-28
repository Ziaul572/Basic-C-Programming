#include<stdio.h>

int main()
{
    int a, b, n, m, p, q, i;
    int kangaroo1 = 0, kangaroo2 = 0;
    int x = 0;
    scanf("%d%d%d%d", &a, &b, &n, &m);
    p = a;
    q = n;

    for(i = 0; i < 100 ;i++ ){
       // kangaroo1 = kangaroo1 + p;
        //kangaroo2 = kangaroo2 + q;
        p = p + b;
        q = q + m;
        if(p == q){
            x++;
            break;
        }
    }
    if(x >= 1){
        printf("YES");
    }
    else{
        printf("NO");
    }
}
