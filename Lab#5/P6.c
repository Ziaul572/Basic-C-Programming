#include<stdio.h>
int main()
{
    int i, data[3], min=0, max = 0;
    scanf("%d%d%d",&data[0],&data[1],&data[2]);
    if(data[0] > data[1] && data[0] > data[2]){
        max = data[0];
        if( data[1] > data [2]){
            min = data[2];
        }
        else {min = data[1];}
    }
    else if( data[1] > data[0] && data[1] > data[2]){
        max = data[1];
        if(data[0] < data[2]){
            min = data[0];
        }
        else {
            min = data[2];
        }
    }
    else if (data[2] > data[0] && data[2] > data [1])
    {
        max = data[2];
        if(data[0] > data[1]){
            min = data[1];
        }
        else {
            min = data[0];
        }
    }
    printf(" Maximun = %d \n Minimum = %d", max, min);
}
