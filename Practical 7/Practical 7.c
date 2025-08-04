#include <stdio.h>
#define AMOUNT 300

int main() {
    int age;
    printf("To decide whether a visitor should be charged for entry or allowed in for free\n");
    printf("Enter your age: ");
    scanf("%d", &age);

    if(age < 0 || age > 120) {
        printf("Invalid age entered. Please enter age between 0 and 120.\n");
        return 1;
    }

    if(age < 12) {
        printf("You can enter for free!\n");
    }
    else {
        int amountToPay = AMOUNT;
        if(age >= 60) {
            printf("You got a discount of Rs.50\n");
            amountToPay -= 50;
            if(amountToPay < 0) amountToPay = 0;
        }
        printf("You have to pay Rs.%d\n", amountToPay);
        printf("this program is developed by Rashi Domadiya 25TCEILX");
    }

    return 0;
}
