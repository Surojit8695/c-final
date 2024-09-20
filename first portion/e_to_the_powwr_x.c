#include <stdio.h>
#include <math.h>

int factor(int n);

int main() {
    int n, x, i;
    float sum = 1;  // Initialize sum to 1 to account for the first term of the series

    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i < n; i++) {
        sum = sum + (float)(pow(x, i) / factor(i));
    }

    printf("sum = %f\n", sum);
    return 0;
}

int factor(int n) {
    int fact = 1, i;
    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

