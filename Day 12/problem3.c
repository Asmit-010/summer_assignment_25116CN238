#include <stdio.h>

void fibonacci(int n)
{
    int first = 0, second = 1, next;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", first);

        next = first + second;
        first = second;
        second = next;
    }
}

int main()
{
    int terms;

    printf("Enter number of terms: ");
    scanf("%d", &terms);

    printf("Fibonacci Series: ");
    fibonacci(terms);

    return 0;
}