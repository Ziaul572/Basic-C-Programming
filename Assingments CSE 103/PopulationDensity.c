#include<stdio.h>

struct country
{
    char name[50];
    int population;
    float area;
};
float populationDensity(int pop, float area)
{
    float density = (pop / area);
    return density;
}

int main()
{
    struct country x[50];
    int i, testCase;
    float density;
    int densityIndex;
    float leastDense;
    printf("Enter Number of Input Country.\n");
    scanf("%d", &testCase);

    for(i = 0; i < testCase; i++)
    {

        scanf("%s", x[i].name);
        scanf("%d", &x[i].population);
        scanf("%f", &x[i].area);
    }
    leastDense = populationDensity(x[0].population, x[0].area);
    for(i = 1; i < testCase; i++)
    {
        density = populationDensity(x[i].population, x[i].area);
        if (density < leastDense)
        {
            densityIndex = i;
        }
        else
        {
            densityIndex = 0;
        }
    }
    printf("The Country with the least number of people in per unit area is %s", x[densityIndex].name);
}
