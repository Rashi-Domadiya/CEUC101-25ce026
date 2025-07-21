#include<stdio.h>
void main()
{
    float Weight,Height,BMI;
    printf("Calculation of BMI\n");
    printf("Enter Weight in kg\n");
    scanf("%f",&Weight);
    printf("Enter Height in meters\n");
    scanf("%f",&Height);
    BMI=Weight/(Height*Height);
    printf("your BMI is :%f\n",BMI);
    {
    float BMI=25.8;
    if(BMI<18.5)
       {
           printf("You are under weight");
       }
       else if (BMI>=18.5 | BMI<24.9)
        {
            printf("You are healthy\n");
        }
    }
    {
    float BMI=25.0;
    if(BMI<25.0)
       {
           printf("You are over weight");
       }
       else if (BMI>=25.0 & BMI<24.9)
        {
            printf("You are healthy\n");
        }
    }



}

