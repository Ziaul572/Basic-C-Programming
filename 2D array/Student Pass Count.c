#include<stdio.h>
int main()
{
    int arr[4][5] ={{70, 80, 90, 67, 87},
                    {50, 70, 40, 90, 69},
                    {99, 80, 79, 80, 91},
                    {78, 79, 80 ,85, 90}};
    int i, j, pass = 0, fail;
    for( i = 0; i < 4; i++){
          //pass ;
          fail = 0;
        for( j = 0; j < 5; j++){
            if (arr[i][j] < 60){
                fail++;
                break;
            }
        }
        if( fail == 0){
            pass++;
        }
    }
    printf("%d", pass);
    /*for(i = 0; i < 4; i++){
        for(j = 0; j < 5; j++){
            printf("%d ", arr[i][j]);
        }
    } */
}
