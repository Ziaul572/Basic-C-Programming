#include<stdio.h>

int main()
{

    int array[8] = { 0, 1, 2, 3, 4, 5, 6, 7 };
    int i, *ptr, n = 7;
    ptr = array;
    int temp;

    for(i = 0; i < 4; i++){
        temp = *(ptr + i);
        *(ptr + i) = *(ptr + n);
        *(ptr + n)  = temp ;

        //ptr++;  (not nessecery. caused many unnessesary increments.)
        n--;
      //  printf("%d",n);
    }

   // ptr = array;
    for( i = 0; i < 8; i++){
        printf("%d ", array[i]);
       // ptr++;
    }

}

