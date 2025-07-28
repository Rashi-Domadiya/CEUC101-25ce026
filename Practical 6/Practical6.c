#include<stdio.h>
void main()
{
    float Celsius,Fahrenheit;
    printf("Conversion Of Temperatures In Degree Celsius To Fahrenheit\n");
    printf("Enter The Temperature In Celsius:\n",Celsius);
    scanf("%f",&Celsius);
    Fahrenheit=(Celsius*9.0/5.0)+32.0;
    printf("The temperature in Fahrenheit is: %f\n",Fahrenheit);
    printf("This program is prepared by Domadiya Rashi 25TCEILX");
}
