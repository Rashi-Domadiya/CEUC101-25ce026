#include <stdio.h>


int main() {
    char *summary;
    int size1, size2;

    printf("Enter initial summary size: ");
    scanf("%d", &size1);
    getchar();

    summary = (char *)calloc(size1, sizeof(char));
    if (summary == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter initial short summary: ");
    fgets(summary, size1, stdin);

    printf("\nInitial Summary:\n%s\n", summary);

    printf("Enter new (larger) summary size: ");
    scanf("%d", &size2);
    getchar();

    summary = (char *)realloc(summary, size2 * sizeof(char));
    if (summary == NULL) {
        printf("Reallocation failed!\n");
        return 1;
    }

    printf("Enter the updated (longer) summary: ");
    fgets(summary, size2, stdin);

    printf("\nUpdated Summary:\n%s\n", summary);

    free(summary);
    return 0;
}

