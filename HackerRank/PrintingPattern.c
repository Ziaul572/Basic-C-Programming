#include<stdio.h>

int main()
{

    int testCase;
    int i, j;
    int maxLength;
    int a = 0, b = 0;

    scanf("%d", &testCase);
    int maxTc = testCase;

    maxLength = (2 * testCase) - 1 ;

    for(i = 0; i < maxLength; i++){
        for(j = 0; j < maxLength; j++){



            if ((i == 0 || j == 0) || (j == maxLength - 1) || (i == maxLength - 1)){
                printf("%d ", maxTc);
            }
            else if (i == j){
                testCase = testCase - 1;
                printf("%d ", testCase);
            }
            else if (j < maxLength - i){
                    printf("%d ", testCase);
                }
                else if ((i + j) == (maxLength - 1)){
                    testCase = testCase + i;
                    printf("%d ", testCase);
                }


            else {printf("0 ");}

        }

        printf("\n");

    }

}
