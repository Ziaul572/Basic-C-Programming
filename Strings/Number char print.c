#include<stdio.h>
static const char *string[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
int main()
{
    int n;
    printf("Enter a number between 1 and 9\n");
    scanf("%d", &n);
    if(n >= 1 && n < 10){
    printf("%s", string[n - 1]);
    }
    else {
        printf("The number is greater than nine");
    }
}
