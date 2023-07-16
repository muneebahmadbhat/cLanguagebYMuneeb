
//  Q) Write a function to convert celsius to fahrenheit

float celciusToFahrenheit (float celsius);

#include <stdio.h>

int main (){
    float celcius;
    printf("Enter temperature in terms of celsius\n");
    scanf("%f",&celcius);
    printf("Fahrenheit:%f",celciusToFahrenheit(celcius));
    return 0;
}

float celciusToFahrenheit (float celsius){
    float fahrenheit = (celsius * 9.0/5.0) + 32;
    return fahrenheit;
}