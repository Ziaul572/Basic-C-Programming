#include<stdio.h>
#include<string.h>

int main()
{
    char name[50];
    int i, p;
    gets(name);
    p = strlen(name);
    for(i = 0; i < p; i++){
        printf("(%c - %d) ", name[i], name[i]);
    }
}
