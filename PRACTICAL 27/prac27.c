#include <stdio.h>

int main() {
    int n;
    long long first = 1, second = 1, next, total = 0;

    printf("Enter the number of months: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Number of months must be at least 1.");
        return 0;
    }

    printf("\n--- Savings Growth Pattern  ---");

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            next = first;
        } else if (i == 2) {
            next = second;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("Month %d: ₹%lld", i, next);
        total += next;
    }

    printf("\nTotal savings after %d months: ₹%lld", n, total);
    return 0;
}
