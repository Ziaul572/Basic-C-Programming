#include<stdio.h>
#include"FunctionHeader.h"

int main(){
    int i, c;
    char arr[50];
    gets(arr);
    c = CountVowel(arr);
    printf("The Number of vowel is = %d", c);
}
