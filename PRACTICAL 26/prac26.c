#include <stdio.h>
#include <math.h>


int isValidTriangle(double a, double b, double c) {
    if ((a + b > c) && (a + c > b) && (b + c > a))
        return 1;
    else
        return 0;
}


double calculateArea(double a, double b, double c) {
    double s = (a + b + c) / 2.0;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}

int main() {
    double a, b, c;


    printf("Enter the lengths of the three sides of the triangle:\n");
    printf("Side a: ");
    scanf("%lf", &a);
    printf("Side b: ");
    scanf("%lf", &b);
    printf("Side c: ");
    scanf("%lf", &c);


    if (isValidTriangle(a, b, c)) {
        double area = calculateArea(a, b, c);
        printf("\n The sides form a valid triangle.\n");
        printf(" Area of the triangle = %.2lf square units.\n", area);
    } else {
        printf("\n The given sides do not form a valid triangle.\n");
    }

    return 0;
}

