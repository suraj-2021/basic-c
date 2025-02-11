#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int terms, i;
    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &terms);

    printf("Fibonacci series: ");

    for (i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
