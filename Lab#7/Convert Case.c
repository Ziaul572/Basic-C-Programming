#include<stdio.h>
#include<string.h>


int main()
{
    char name[50];
    int p = 0, i ;

    gets(name);
    p = strlen(name);
    for(i = 0; i < p; i++){
        if(name[i] >= 'A' && name[i] <= 'Z'){
            name[i] = name[i] + 32;
        }
        else if(name[i] >= 'a' && name[i] <= 'z'){
            name[i] = name[i] - 32;
        }
        else{
            name[i] = '?';
        }
    }
    printf("%s", name);
}
