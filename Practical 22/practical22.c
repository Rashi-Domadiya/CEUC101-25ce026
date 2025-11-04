#include <stdio.h>

int main() {
    int rows = 5, seats = 10;
    char theatre[rows][seats];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < seats; j++) {
            theatre[i][j] = 'O';
        }
    }

    int reserved, r, s;
    printf("Enter the number of reserved seats: ");
    scanf("%d", &reserved);

    for (int i = 0; i < reserved; i++) {
        printf("Enter row and seat number for reserved seat %d (e.g., 2 5): ", i + 1);
        scanf("%d %d", &r, &s);

        if (r >= 1 && r <= rows && s >= 1 && s <= seats)
            theatre[r - 1][s - 1] = 'X';
        else
            printf("Invalid seat position! Skipping...\n");
    }

    printf("\nSeating Chart:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d: ", i + 1);
        for (int j = 0; j < seats; j++) {
            printf("%c ", theatre[i][j]);
        }
        printf("\n");
    }

    return 0;
}

