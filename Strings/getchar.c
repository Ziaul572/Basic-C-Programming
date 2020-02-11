#include<stdio.h>
int main()
{
    char line[81], charecter;
    int c = 0;
    printf("Enter Text.\n");
    do {
        charecter = getchar();
        line[c] = charecter;
        c++;
    }
    while (charecter != '\n');
    c = c -1;
    line[c] = '\0';
    printf("\n%s\n",line);
}
