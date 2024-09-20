#include<stdio.h>
// Function to calculate factorial
int factorial(int);

int main() {
    int n,i;
    float sum = 0.0;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum of the series
    for ( i = 1; i <= n; i++) {
        sum=sum+((float)i/(float)factorial(i+1));
    }

    // Output the result
    printf("The sum of the series is: %f\n", sum);

    return 0;
}
//function for calculate factorial
int factorial(int num) {
    int fact = 1,i;
    for ( i = 1; i <= num; i++) {
        fact=fact*i;
    }
    return fact;
}

