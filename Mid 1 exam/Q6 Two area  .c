#include<stdio.h>
int main()
{
    float length, width, r, areaRec, areaCir, gfabric, pi = 3.14;
    printf(" Length : ");
    scanf("%f", &length);
    width = length * 0.6;
    r = length * 0.2;
    areaRec = length * width;
    areaCir = pi * r * r;
    gfabric = areaRec - areaCir;
    printf("Green area = %f \nRed area = %f ", gfabric, areaCir);

}
