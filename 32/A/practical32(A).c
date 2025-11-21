#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void reverse(char *word, int len) {
    int i = 0, j = len - 1;
    while (i < j) {
        char temp = word[i];
        word[i] = word[j];
        word[j] = temp;
        i++;
        j--;
    }
}

int main() {
    FILE *fp = fopen("Demo.txt", "r");
    char word[100];
    int index = 0, ch;

    if (fp == NULL) {
        printf("Error: Demo.txt does not exist.\n");
        return 1;
    }

    printf("Reversed words:\n");

    while ((ch = fgetc(fp)) != EOF) {
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            word[index] = '\0';
            reverse(word, index);
            printf("%s%c", word, ch);
            index = 0;
        } else {
            if (index < 99)
                word[index++] = ch;
        }
    }

    if (index > 0) {
        word[index] = '\0';
        reverse(word, index);
        printf("%s", word);
    }

    fclose(fp);
    return 0;
}

