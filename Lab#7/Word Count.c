#include<stdio.h>
#include<string.h>

int main()
{
    char name[50];
    int i, p, count = 0;

    gets(name);
    p = strlen(name);
    for(i = 0; i < p; i++){
            if(name[i] == ' ' && name[i + 1] == ' '){
                name[i] = '0' ;
            }
   //     if( name[i] == ' ' ){
   //         count++;}
    }
    for(i = 0; i < p; i++){
        if(name[i] == ' '){
            count++;
        }
    }
    printf("%s", name);
    printf("%d", count + 1);
}
