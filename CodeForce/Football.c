#include<stdio.h>
int main()
{
    int c = 0, d = 0, a = 0, b = 0;
    long int n;
    scanf("%ld", &n);
    int p, q;
    p = n % 1000000;
    q = n / 1000000;
    for( ; ; ){
        if(p % 10 == 0){
            c++;
            p = p / 10;
            if (q % 10 == 0){
                a++;
                q = q / 10;
            }
        }
        if (p % 10 == 1){
            d++;
            p = p / 10;
            if(q % 10 == 1 ){
                b++;
                q = q / 10;
            }
        }
        if (q == 0 && p == 0){
            break;
        }
    }
    if (c >= 7 || d >= 7){
        printf("YES");
    }
    else{
        printf("NO");
    }
    //printf("%d %d ",c,d);
}
