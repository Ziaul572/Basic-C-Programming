#include<stdio.h>

struct student
{
    char name[75];
    float cGPA;
};

int MaxCGPA(struct student *a, int tc)
{
    int i;
    int maxG = 0;
    int max;
    for(i = 0; i < tc; i++)
    {
        if(a[i].cGPA > maxG)
        {
            maxG = a[i].cGPA;
            max = i;
        }
    }
    return max;
}

int main()
{
    int testCase;
    int i;
    int highestIndex;
    struct student x[100];
    printf("Enter Number of Elements.\n");
    scanf("%d", &testCase);

    for(i = 0; i < testCase; i++)
    {
        printf("Enter Name of the Student : ");
        //gets(x[i].name);
        scanf("%s", x[i].name);
        printf("Enter CGPA of %s : ", x[i].name);
        scanf("%f", &x[i].cGPA);
    }
    highestIndex = MaxCGPA(x, testCase);

    printf("The Student with the Highest CGPA is : %s", x[highestIndex].name);
    // printf("%d", highestIndex);
}
