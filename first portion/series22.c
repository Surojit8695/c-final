#include <stdio.h>
#include <math.h>

float calculate_exponential(int n, float x);

int main() {
    int n;
    float x;

    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the number of terms n: ");
    scanf("%d", &n);

    float result = calculate_exponential(n, x);
    printf("e^%.2f = %.6f\n", x, result);

    return 0;
}

float calculate_exponential(int n, float x) {
    float sum = 1.0;  // Initialize sum of series
    float term = 1.0; // Initialize the first term
    int i;

    for ( i = 1; i < n; i++) {
        term = term * x / i; // Calculate the next term
        sum = sum + term;    // Add the term to the sum
    }

    return sum;
}

