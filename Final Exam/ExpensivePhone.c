#include<stdio.h>

struct smartPhone
{
    char manufacturer[100];
    float screenSize;
    int ram;
    int fCam;
    int bCam;
    int price;
};

int ExpensivePhone(struct smartPhone *p, int tc)
{
    int i, c = 0;
    int expensive = p[0].price;
    int expensiveIndex;

    for(i = 0; i < tc; i++)
    {
        if (p[i].price > expensive)
        {
            expensive = p[i].price;
            expensiveIndex = i;
        }
    }
    return expensiveIndex;
}

int main()
{
    int i, testCase, expensiveIndex;
    struct smartPhone x[100];

    printf("Enter number of Smartphones.\n");
    scanf("%d", &testCase);

    for(i = 0; i < testCase; i++)
    {
        printf("Enter the Manufacturer's name : ");
        scanf("%s", x[i].manufacturer);

        printf("Enter the screen size of the phone : ");
        scanf("%f", &x[i].screenSize);
        printf("Enter the front camera magapixel : ");
        scanf("%d", &x[i].fCam);
        printf("Enter the back camera magapixel : ");
        scanf("%d", &x[i].bCam);

        printf("Enter the Price of the phone. : ");
        scanf("%d", &x[i].price);
    }
    expensiveIndex = ExpensivePhone(x, testCase);

    printf("The manufacturer of the expensive phone is %s ", x[expensiveIndex].manufacturer);


}
