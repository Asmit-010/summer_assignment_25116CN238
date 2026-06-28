#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int freq[256] = {0};
    int i;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[i] != '\n')
            freq[(int)str1[i]] = 1;
    }

    printf("Common characters: ");

    for (i = 0; str2[i] != '\0'; i++) {
        if (str2[i] != '\n' && freq[(int)str2[i]] == 1) {
            printf("%c ", str2[i]);
            freq[(int)str2[i]] = 2;
        }
    }

    return 0;
}