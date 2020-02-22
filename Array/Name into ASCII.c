#include<stdio.h>
int main()
{
    char  charecter, x;
    int name[20], c = 0;
    do {
        charecter = getchar ();
        name[c] = 'charecter';
        c++;
    }
    while(charecter != '\n');
  //  c = c - 1 ;
    //name[c] = '\0';
//     char x;
int i = 0;
  do {
    printf("\n%d ", name[i]);
    i++;
     }
     while( i == 19);
}
