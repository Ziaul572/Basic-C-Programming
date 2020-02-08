#include<stdio.h>
int main()
{
    int n,i,b;
    b=0;
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0){
            b=b+1;
        }
    }
    if(b==0){
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }
}
