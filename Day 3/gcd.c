#include <stdio.h>
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    
    printf("GCD: %d\n", gcd(n1, n2));
    return 0;
}