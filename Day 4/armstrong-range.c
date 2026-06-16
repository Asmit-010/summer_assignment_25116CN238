#include <stdio.h>
#include <math.h>

int main() {
    int start, end, i, temp, rem, digits, sum;
    printf("Enter start and end of range: ");
    scanf("%d %d", &start, &end);

    for (i = start; i <= end; i++) {
        temp = i;
        sum = 0;
        digits = (int)log10(i) + 1;

        while (temp > 0) {
            rem = temp % 10;
            sum += (int)round(pow(rem, digits));
            temp /= 10;
        }

        if (sum == i) printf("%d ", i);
    }
    return 0;
}