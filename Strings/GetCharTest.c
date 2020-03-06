#include <stdio.h>
#include <stdbool.h>
int main(){
    char input;
    int index = 0;
    char inputString[100];
    bool isContinue = true;
    while(scanf(" %c", &input)==1){
        inputString[index]= input;
        index++;
        if(index == '\n')
            break;
        //printf("%c", input);
    }

    printf("%s", inputString);
    return 0;
}
