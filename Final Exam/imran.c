#include<stdio.h>
float ArrAvg(int *a, int t)
{
    int i;
    float avg, sum=0;
    for(i=0 ; i<t ; i++){
        sum=sum+a[i];
    }
    avg=sum/t;
    return avg;
}
float Maxavg(float a, int t, int *b)
{
   // int c = 0;
    int i;
    float max = b[0];
for(i = 0; i < t; i++){
    if(b[i]> max && b[i] < a){
        max = b[i];
    }
}
        return max;
}
int main(){
 int x[100];
 int i, n;
 float p, q;
 scanf("%d", &n);
 for(i=0; i<n; i++){
    scanf("%d", &x[i]);
 }
 p=ArrAvg(x, n);
 q=Maxavg(p, n, x);
 printf("\n%f", q);
}
