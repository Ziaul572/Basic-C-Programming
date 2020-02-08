#include<stdio.h>
int main()
{
    int tc[5], i, j=0,k=0, e = 0, o = 0;
    printf("Enter 5 integer value.\n");
    //scanf("%d%d%d%d%d",&tc[0],&tc[1],&tc[2],&tc[3],&tc[4]);
     for(i = 0; i < 5; i++){
        scanf("%d",&tc[i]);
            if(tc[i] % 2 == 0){
                e++;
            } else {
                o++;
            }
     }
     int even[e] = {0}, odd[o] = {0};
     for(i = 0; i < 5; i++){
            if(tc[i] % 2 == 0){
                even[j] = tc[i];
                j=j+1;
                if(j>e){break;}
            }
            else {
                odd[k] = tc[i];
                k=k+1;
                if(k>o){break;}
            }
     }
     printf("The even numbers are :");
     for(i=0;i<e;i++){
        printf(" %d ",even[i]);
     }
     printf("The odd numbers are :");
     for(i=0;i<o;i++){
        printf(" %d ",odd[i]);
     }
     }
