#include<stdio.h>
int main()
{
    float Fahrenheit, Celsius;
    scanf("%f",&Fahrenheit);
    //Fahrenheit = 64;
    Celsius = ((Fahrenheit-32)*5)/9;
    printf("\n\n Temperature in Celsius is : %f",Celsius);
    return (0);
}