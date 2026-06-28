#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
    }

    printf("\nCharacter Frequency:\n");

    for (i = 0; i < 256; i++) {
        if (freq[i] != 0 && i != '\n') {
            printf("%c = %d\n", i, freq[i]);
        }
    }

    return 0;
}