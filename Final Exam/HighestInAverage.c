#include<stdio.h>

float Avg(float *mark, int tc)
{
    float sum = 0;
    int i;
    int c = 0;
    float avg;
    for(i = 0; i < tc; i++)
    {
        sum = sum + mark[i];
    }

    avg = sum / tc;
    return avg;
}

float DesiredMax(float avg, int tc, float *mark)
{
    int c = 0;
    int i;
    float dMax = mark[0];
    for(i = 0; i < tc; i++)
    {
        if(mark[i] > dMax && mark[i] < avg)
        {
            dMax = mark[i];
        }
    }
    return dMax;
}

int main()
{
    int i, testCase;
    float Marks[100];
    float avg, desMax;

    printf("Enter Number of Students.\n");
    scanf("%d", &testCase);
    printf("Enter the Marks.\n");
    for(i = 0; i < testCase; i++)
    {
        scanf("%f", &Marks[i]);
    }
    avg = Avg(Marks, testCase);

    desMax = DesiredMax(avg, testCase, Marks);

    printf("%.1f", desMax);
}


