#include <stdio.h>

int main() {
    int N;
    printf("Enter the total number of participants (N): ");
    scanf("%d", &N);

    int arr[N - 1];

    printf("Enter the %d participant IDs (unordered):\n", N - 1);
    for (int i = 0; i < N - 1; i++) {
        scanf("%d", &arr[i]);
    }

    int missingID = -1;

    for (int id = 1; id <= N; id++) {
        int found = 0;
        for (int j = 0; j < N - 1; j++) {
            if (arr[j] == id) {
                found = 1;
                break;
            }
        }
        if (!found) {
            missingID = id;
            break;
        }
    }

    if (missingID != -1)
        printf("Missing participant ID is: %d\n", missingID);
    else
        printf("No participant ID is missing.\n");

    return 0;
}
