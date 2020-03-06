#include<stdio.h>
#include<string.h>

int main()
{
    char name[50];
    int i, p;
    int countLetter = 0, countDigit = 0, countSymbol = 0;
    gets(name);
    p = strlen(name);
    for(i = 0; i < p; i++){
        if( (name[i] >= 'A' && name[i] <= 'Z' ) || (name[i] >= 'a' && name[i] <= 'z') ){
            countLetter++ ;
        }
        else if(name[i] >= '0' && name[i] <= '9'){
            countDigit++ ;
        }
        else {
            countSymbol++ ;
        }
    }
    printf("\n\tLetter = %d\n\tDigit = %d\n\tSymbol = %d\n", countLetter, countDigit, countSymbol);
}
