#include<stdio.h>
#include<string.h>

int main()
{
    char name[50];
    int i, p, temp;

    gets(name);
    p = strlen(name);
    for(i = 0; i < p; i = i + 2){
            if(i == p - 1){
                break;
            }
        temp = name[i];
        name[i] = name[i + 1];
        name[i + 1] = temp;
    }
    printf("%s", name);
}
