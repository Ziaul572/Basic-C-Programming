#include<stdio.h>
int main()
{
    int abc[3], num[4];
    int i, p;
    for(i = 0; i < 4; i++){
        scanf("%d", &num[i]);
    }
    int max = num[0];
    for(i = 0; i < 4; i++){
        if (num[i] > max){
            max = num[i];
            p = i;
        }
    }
    int j = 0;
    for(i = 0; i < 4; i++){
        if(i == p){
            i++;
        }
        abc[j] = max - num[i];
        j++;
        if(j == 3){
            break;
        }
    }
    printf("%d %d %d", abc[0], abc[1], abc[2]);
// printf("%d", abc[3]);
}
