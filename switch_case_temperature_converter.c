#include<stdio.h>

int main()
{
    int choice;
    double temp, convertedtemp;
    printf("press 1(Celsius to Fahrenheit) or 2(Fahrenheit to Celsius) or 3(Celsius to Kelvin): ");
    scanf("%d", &choice);
    printf("Enter Temperature: ");
    scanf("%lf", &temp);

    switch(choice){
        case 1: 
            convertedtemp = (temp * 9) / 5 + 32;
            printf("Fahreneit: %.3lf\n", convertedtemp);
            break;
        case 2: 
            temp = (temp - 32) * 5 / 9;
            printf("Celsius: %.3lf\n", temp);
            break;
        case 3:
            temp = temp + 273.15;
            printf("Kelvin: %.3lf\n", temp);
            break;
        default: 
            printf("Invalid input.\n");
    }
    return 0;
}