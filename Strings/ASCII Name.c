#include<stdio.h>
int main()
{
    char character, ascii, c[100];
    int i = 0, b = 0;
    printf("Enter Character for ASCII values.\n");
    do {
        character = getchar();
        c[i] = character;
        i++;
    }
    while(character != '\n');
    i--;
    c[i] = '\0';
    printf("\n%s\n",c);
    do {
         ascii = c[b];
        printf("(%c - %d) ", ascii, ascii);
        b++;
    }
    while( c[b] != '\0');
}
