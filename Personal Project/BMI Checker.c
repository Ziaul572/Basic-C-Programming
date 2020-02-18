#include<stdio.h>
#include<math.h>
int main()
{
    int foot, inch;
    float kg, bmi, metre = 0;
    printf("Enter your height in foot.\n");
    scanf("%d", &foot);
    printf("and inch.\n");
    scanf("%d", &inch);
    metre = metre + ( foot / 3.281);
    metre = metre + ( inch / 39.37);
    printf("Enter your weight in kilograms.\n");
    scanf("%f", &kg );
    bmi = kg / (pow(metre , 2));
    printf("Normal BMI is 18.5 to 25\n");
    printf("Your BMI is %.2f \n", bmi);
    if (bmi < 18.5){
        printf("You are Underweighted.\n");
    }
    else if (bmi <= 25 ){
        printf("You are Normal weighted.\n");
    }
    else if (bmi <= 30 ){
        printf("You are Overweighted.\n");
    }
    else if (bmi > 30){
        printf("You are Obese.\n");
    }
    else {
        printf("Incorrect Values.\n");
    }
}
