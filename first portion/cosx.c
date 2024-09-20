#include <stdio.h>
#include <math.h>

float calculate_cosine(int n, float x);

int main() {
    int n;
    float x;
    float PI=3.1415;

    printf("Enter the value of x (in degrees): ");
    scanf("%f", &x);
    printf("Enter the number of terms n: ");
    scanf("%d", &n);

    // Convert degrees to radians
    x = x * PI / 180.0;

    float result = calculate_cosine(n, x);
    printf("cos(%.2f) = %.6f\n", x, result);

    return 0;
}

float calculate_cosine(int n, float x) {
    float sum = 1.0;  // Initialize sum of series
    float term = 1.0; // Initialize the first term
    int sign = -1;
	int i;    // Alternating sign for the series

    for ( i = 1; i < n; i++) {
        term = term * x * x / (2 * i * (2 * i - 1)); // Calculate the next term
        sum = sum + sign * term;    // Add the term to the sum
        sign = -sign; // Alternate the sign
    }

    return sum;
}

