#include<stdio.h>
int main()
{
    char c;
    printf("\n\t\t\t\t\t\tASCII Values\n");
    for(c = 65; c <= 122; c++){
        if(c > 90 && c < 97)
            continue;
        printf("|%4d - %c ", c, c);
    }
    printf("\n\n");
}
