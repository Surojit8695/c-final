#include <stdio.h>

// Function to calculate factorial
int factor(int n) {
    int i;
    int fact = 1;
    for (i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    float sum =0.0; // Initialize sum with the first term 1/3
    for (i = 2; i <= n; i++) {
        sum += (float)factor(i) / factor(i + 1);
    }

    printf("Sum of the series is: %f\n", sum);

    return 0;
}

