#include<stdio.h>
int main()
{
    int arr[4][5] ={{70, 80, 90, 67, 87},
                    {50, 70, 40, 90, 69},
                    {99, 80, 79, 80, 91},
                    {78, 79, 80 ,85, 90}};
    int i, j;
    float avg;
    for(i = 0; i < 4; i++){
            int sum = 0;
        for( j = 0; j < 5; j++){
            sum = sum + arr[i][j];
        }
       int c = 0;
       // int a = 1;
        avg = sum / 5.0;
        for( j = 0; j < 5; j++){
            if (arr[i][j] > avg){
                c++;
            }
        }
        printf("Student %d Higher than own average mark is %d\n", i + 1, c);
    }
}
