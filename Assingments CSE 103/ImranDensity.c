
#include<stdio.h>

int main()
{
    int i, n;
    struct country
    {
        char  name[20];
        int population;
        float area;
    };
    struct country x[10];
    printf("Enter how many Countries: ");
    scanf("%d", &n);
    for(i=0 ; i<n ; i++)
    {
        printf("\nEnter the Country Name : ");
        scanf("%s", x[i].name);
        printf("\n Population :");
        scanf("%d", &x[i].population);
        printf("\n Area :");
        scanf("%f", &x[i].area);
    }
    int s;
    float min,mini ;
    min=(x[0].population/x[0].area);
    //printf("%f",min);
    for(i=1 ; i<n ; i++)
    {
        mini=(x[i].population/x[i].area);
        if(mini < min)
        {
            min=mini;
            s=i;
        }

    }
    //printf("\n%f\t\t%d",min,s);
    printf("\nleast number of people in per unit area:  ");
    printf("%s", x[s].name);
}
