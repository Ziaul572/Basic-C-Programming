#include<stdio.h>
int main()
{
    int tc, i, j, a, b, n, m;
    scanf("%d", &tc);
    int p, q, r, s, x;
    int arr[100];
    for(i = 0; i < tc; i++){
        scanf("%d %d %d %d", &a, &b, &n, &m);
        p = ((n + 1) - 1) * b;
        q = (a - (n + 1)) * b;
        r = ((m + 1) - 1) * a;
        s = (b - (m + 1)) * a;
        if(p >= q && p >= r && p >= s){
            x = p;
            //printf("%d", x);
        }
        else if(q >= p && q >= r && q >= s){
            x = q;
            //printf("%d", x);
        }
        else if(r >= p && r >= q && r >= s){
            x = r;
            //printf("%d", x);
        }
        else {
            x = s;
            //printf("%d", x);
        }
        arr[i] = x;
        }
       // printf("%d", x);
     for(i = 0; i < tc; i++){
        printf("%d\n", arr[i]);
     }
}
