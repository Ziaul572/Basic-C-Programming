#include<stdio.h>
int main()
{
  /*  int i, j, n, p;
    scanf("%d", &n);
    int c = 0, d = 0;
    for(i = 0; i < n; i++){

        for(j = 0; j < 3; j++){
       // if(scanf("%d", &p) == 1){
       scanf("%d ", &p);
       if (p == 1){
            c++;
          if( c > 1 && c <= 3)  {
            d++;
          }
        }
        }
    //    printf("\n");
    }
    //{
        printf("%d", d);
//
 //   } */
 int n, i, j, num[3];
    scanf("%d", &n);
    int count = 0;
    for(i = 0; i < n; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &num[j]);
        }
          int sum = 0;
        for(j = 0; j < 3; j++){
            sum = sum + num[j];
        }
        if(sum >= 2){
            count++;
        }
    }
    printf("%d", count);
}
