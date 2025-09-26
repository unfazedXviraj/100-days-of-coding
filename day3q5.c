// Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>


void main() {
    float celsius,fahrenheit;
    printf("The temp in celsius is:");
    scanf("%f",&celsius);

    fahrenheit = (celsius*9)/5+32;
    printf("%2f celsius is equal to %2f in fahrenheit",celsius,fahrenheit);

    getch();

}
