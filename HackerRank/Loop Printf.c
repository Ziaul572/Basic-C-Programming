#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

static const char *string[] = {"one","two","three","four","five","six","seven","eight","nine"};

int main()
{
    int a, b, i;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
      for(i = a; i < b; i++){
          if(a >= 1 && a <= 9){
              printf("%s\n",string[i - 1]); }
              }
              if(b > 9){
                  if(b % 2 == 0){
                      printf("even\n");
                  }
                  else{printf("odd");}
              }



    return 0;
}
