#include<stdio.h>
#include<math.h>
int main()
{
    int o;
    int foot, inch;
    float kg, bmi, metre = 0;
    int n;
    float celcius, fahrenheit, kelvin;
    char character, ascii, c[100];
    int i = 0, b = 0;

    printf("Choose an Option.\n1.B.M.I Checker.\n2.Temperature Conversion.\n3.ASCII Name.\n");
   label :
    scanf("%d", &o);
    switch (o){
     case 1:
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


return 0;
     case 2 :

    printf("Choose a Unit for conversion.\n\n1 . Celcius \n2 . Fahrenheit \n3 . Kelvin\n ");
    Label :
    scanf("%d", &n);
    switch (n){
        case 1 :  printf("Enter the temperature in Celcius.\n");
             scanf("%f", &celcius);
             kelvin = celcius + 273.15;
             fahrenheit = (celcius * 1.8 )+32;
             printf(" %.2f C = %.2f K \n %.2f C = %.2f F", celcius, kelvin, celcius, fahrenheit);
             break;
        case 2 : printf("Enter the temperature in Fahrenheit.\n");
             scanf("%f", &fahrenheit);
             celcius = (fahrenheit - 32) * 0.5555;
             kelvin = celcius + 273.15;
             printf(" %.2f F = %.2f C \n %.2f F = %.2f K ", fahrenheit, celcius, fahrenheit, kelvin);
             break;
        case 3 : printf("Enter the temperature in Kelvin\n");
             scanf("%f", &kelvin);
             celcius = kelvin - 273.15;
             fahrenheit = ((kelvin - 273.15) * 1.8 )+ 32;
             printf(" %.2f K = %.2f C \n %.2f K = %.2f F ", kelvin, celcius, kelvin, fahrenheit);
             break;
        default : printf("Please Enter input between 1 and 3\n");
              goto Label;
    }
   return 0;
        case 3 :

    printf("Enter Character for ASCII values.\n");
    do {
        character = getchar();
        c[i] = character;
        i++;
    }
    while(character != '\n');
    i--;
    c[i] = '\0';
    printf("\n%s\n",c);
    do {
         ascii = c[b];
        printf("(%c - %d) ", ascii, ascii);
        b++;
    }
    while( c[b] != '\0');
    return 0;
        default :
            printf("Enter Between 1 and 3.\n");
            goto label;
           return 0;
}
}
