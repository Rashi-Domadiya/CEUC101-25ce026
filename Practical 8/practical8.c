#include<stdio.h>
int main()
{
    int age;
    printf("Enter customer's age:");
    scanf("%d",&age);
    if (age< 0 || age > 120)
    {
        printf("Invalid age. please enter a valid age between 0 and 120.\n");
    }
    else if (age < 18 )
    {
        printf("You are not eligible to open a savings account.\n");
    }
    else if (age >= 18 && age < 60)
    {
        printf("Eligible for regular savings account.\n");
    }
    else
        {
            printf("Eligible for senior citizen savings account.\n");

        }
    return 0;
}
