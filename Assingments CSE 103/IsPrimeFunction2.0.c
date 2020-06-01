#include<stdio.h>
#include<stdbool.h>

bool primeFunction(int x)
{
    int i, c = 0;
    bool prime = true;

    for(i = 2; i < x; i++)
    {
        if(x % i == 0)
        {
            prime = false;
            break;
        }
    }
    return prime;
}

int main()
{
    int num[100], i, count = 0, testCase;
    bool prime = false;

    printf("Enter Number of Elements.\n");
    scanf("%d", &testCase);
    printf("Enter the Numbers.\n");
    for(i =0; i < testCase; i++)
    {
        scanf("%d", &num[i]);

        prime = primeFunction(num[i]);
        if (prime == true)
        {
            count++;
        }
    }
    printf("There are %d Prime Numbers", count);
}

