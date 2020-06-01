#include<stdio.h>

int PriCom(int p, int t)
{
    int i, c=0, d=0, j;



        for(i=2 ; i< p ; i++)
        {
            if(p % i ==0)
            {
                c++;
                break;
            }
        }
        if ( c == 0){
            d = 1;
           }

    return d;
}

int main()
{
    int x[100], n, i, p;
    printf("Enter the number of Element: ");
    scanf("%d", &n);
    printf("Enter the number: ");
int count = 0;
    for(i=0; i<n ; i++)
    {
        p = 0;
        scanf("%d", &x[i]);
        p = PriCom(x[i], n);
        if (p == 1){
            count++;
        }
    }

    printf("\t%d", count);
}
