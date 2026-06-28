#include <stdio.h>
#include <string.h>

int main() {
    char str[100], compressed[200];
    int i, count, j = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        count = 1;

        while (str[i] == str[i + 1]) {
            count++;
            i++;
        }

        compressed[j++] = str[i];

        if (count > 1) {
            compressed[j++] = count + '0';
        }
    }

    compressed[j] = '\0';

    printf("Compressed string: %s\n", compressed);

    return 0;
}