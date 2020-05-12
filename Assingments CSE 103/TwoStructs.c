#include<stdio.h>

struct DoctorInfo
{
    char name [50];
    int age;
    float exp;
};
struct specialDocInfo
{
    char name[50];
    int age;
    float yearExp;
    char specializArea[30];
    float specialExp;
};

float DocAvgAge(struct DoctorInfo *age, int tc)
{
    float sum = 0, avg;
    int i;

    for(i = 0; i < tc; i++)
    {
        sum = sum + age[i].age;
    }
    avg = sum / tc;
}
float SpecialDocAvgAge(struct specialDocInfo *age1, int tc)
{
    float sum = 0, avg;
    int i;

    for(i = 0; i < tc; i++)
    {
        sum = sum + age1[i].age;
    }
    avg = sum / tc;
}
int main ()
{
    int i;
    struct DoctorInfo x[50];
    struct specialDocInfo y[50];

    int testCaseDoc, testCaseSpecialDoc;
    printf("Enter numbers Doctor.\n");
    scanf("%d", &testCaseDoc);
    for(i = 0; i < testCaseDoc; i++)
    {
        printf("Enter the name of the Doctor : ");
        scanf("%s", x[i].name);
        printf("Enter the age of DR.%s :", x[i].name);
        scanf("%d", &x[i].age);
        printf("Enter DR.%s's years of experience : ", x[i].name);
        scanf("%f", &x[i].exp);
    }
    printf("Enter the number of Specialized Doctors.\n");
    scanf("%d", &testCaseSpecialDoc);

    for(i = 0; i < testCaseSpecialDoc; i++)
    {
        printf("Enter the name of the Specialized Doctor : ");
        scanf("%s", y[i].name);
        printf("Enter the age of DR.%s :", y[i].name);
        scanf("%d", &y[i].age);
        printf("Enter DR.%s's years of experience : ", y[i].name);
        scanf("%f", &y[i].yearExp);
        printf("Enter Dr.%s's area of Specialization : ", y[i].name);
        scanf("%s", y[i].specializArea);
    }
    float docAvg, specialDocAvg, totalAvgAge;
    docAvg = DocAvgAge(x, testCaseDoc);
    specialDocAvg = SpecialDocAvgAge(y, testCaseSpecialDoc);

    totalAvgAge = (docAvg + specialDocAvg) / 2.0;

    printf("The Average age of Doctors and Specialized Doctors is.\n %f", totalAvgAge);
}
