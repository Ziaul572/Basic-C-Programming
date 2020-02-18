#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    switch (n) {
       case 1 : n = n + 1;
       break;
       case 2 : n = n + 2;
       break;
       case 3 : n = n + 3;
       break;
       default : printf("Wrong");
    }
    printf("%d", n);
}
