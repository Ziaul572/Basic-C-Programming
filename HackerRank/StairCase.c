#include<stdio.h>

int main()
{
    int testCase, i, j, a;
    int count = 1;
    scanf("%d", &testCase);
int row = testCase - 1;
  for(a = 0; a < testCase; a++){

    for(i = row - 1; i >= 0; i--){
        printf("010");
    }
    for(j = 0; j < count; j++){
            printf("101");
    }
    printf("\n");
    count++;
    row--;
  }
}
