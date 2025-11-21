#include <stdio.h>

int main() {
    FILE *fp;
    int marks, n, i;

    fp = fopen("marks.dat", "wb");
    if (fp == NULL) {
        printf("File cannot be opened.\n");
        return 1;
    }

    printf("How many students? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &marks);
        putw(marks, fp);
    }

    fclose(fp);

    fp = fopen("marks.dat", "rb");
    if (fp == NULL) {
        printf("File cannot be opened.\n");
        return 1;
    }

    printf("\nRetrieved Marks:\n");

    while (!feof(fp)) {
        marks = getw(fp);
        if (!feof(fp))
            printf("%d\n", marks);
    }

    fclose(fp);
    return 0;
}

