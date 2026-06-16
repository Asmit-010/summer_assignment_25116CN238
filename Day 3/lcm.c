#include <stdio.h>

int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int lcm = (a * b) / gcd(a, b);

    printf("LCM is: %d\n", lcm);
    return 0;
}