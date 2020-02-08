#include<stdio.h>
int main()
{
    int tc[5], i, e=0, o=0;
    printf("Insert 5 integer values.\n");
    for(i = 0; i < 5; i++ ){
        scanf("%d", &tc[i]);
        if(tc[i] % 2 == 0){
            e++;
        }
        else { o++;}
    }
    int even[e], odd[o];
    for(i = 0; i < 5; i++){
        if(tc[i] % 2 == 0){
            even[i] = tc[i];
        }
        else {
            odd[i] = tc[i];
        }
    }
    for(i = 0; i < 5; i++ ){
        printf("%d ",even[i]);
    }
}
