#include<stdio.h>
int main()
{
    int n;
    float celcius, fahrenheit, kelvin;
    printf("Choose a Unit for conversion.\n\n1 . Celcius \n2 . Fahrenheit \n3 . Kelvin\n ");
label :
    scanf("%d", &n);
    switch (n)
    {
    case 1 :
        printf("Enter the temperature in Celcius.\n");
        scanf("%f", &celcius);
        kelvin = celcius + 273.15;
        fahrenheit = (celcius * 1.8 )+32;
        printf(" %.2f C = %.2f K \n %.2f C = %.2f F", celcius, kelvin, celcius, fahrenheit);
        break;
    case 2 :
        printf("Enter the temperature in Fahrenheit.\n");
        scanf("%f", &fahrenheit);
        celcius = (fahrenheit - 32) * 0.5555;
        kelvin = celcius + 273.15;
        printf(" %.2f F = %.2f C \n %.2f F = %.2f K ", fahrenheit, celcius, fahrenheit, kelvin);
        break;
    case 3 :
        printf("Enter the temperature in Kelvin\n");
        scanf("%f", &kelvin);
        celcius = kelvin - 273.15;
        fahrenheit = ((kelvin - 273.15) * 1.8 )+ 32;
        printf(" %.2f K = %.2f C \n %.2f K = %.2f F ", kelvin, celcius, kelvin, fahrenheit);
        break;
    default :
        printf("Please Enter input between 1 and 3\n");
        goto label;
    }
}
