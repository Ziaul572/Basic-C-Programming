#include<stdio.h>

int main()
{
    int array[8] = { 0, 1, 2 , 3, 4, 5, 6, 7 };
    int i, temp, n = 7;

    for(i = 0; i < 4; i++){
        temp = array[i];
        array[i] = array[n];
        array[n] = temp;
        n--;
    }

    for(i = 0; i < 8; i++){
        printf("%d ", array[i]);
    }

}
