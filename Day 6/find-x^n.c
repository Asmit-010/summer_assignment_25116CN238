#include <stdio.h>

double power_optimized(double x, long long n) {
    if (n < 0) {
        x = 1 / x;
        n = -n;
    }

    double result = 1.0;
    while (n > 0) {

        if (n % 2 == 1) {
            result *= x;
        }
        x *= x;  
        n /= 2;  
    }
    return result;
}

int main() {
    double x;
    long long n;

    printf("Enter base (x): ");
    scanf("%lf", &x);
    printf("Enter exponent (n): ");
    scanf("%lld", &n);

    if (x == 0 && n == 0) {
        printf("0^0 is mathematically undefined.\n");
    } else {
        double ans = power_optimized(x, n);
        printf("%.4lf raised to the power %lld is: %.4lf\n", x, n, ans);
    }

    return 0;
}