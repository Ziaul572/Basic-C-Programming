// Write a program in C to count a total number of duplicate elements in an array...

#include<stdio.h>
int main()
{
    int i, j, count = 0;
    int data[4];
    printf("Enter the values.\n");
   for(i = 0; i < 5; i++){
    scanf("%d", &data[i]);
   }
   for(i = 0; i < 5; i++){
     for(j = i+1; j < 5; j++){
        if(data[i] == data[j]){
            count++;
            break;
        }
     }
   }
   printf("The number of duplicate elements = %d", count);

}
