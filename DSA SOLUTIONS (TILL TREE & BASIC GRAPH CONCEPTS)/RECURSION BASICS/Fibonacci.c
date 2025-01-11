#include <stdio.h>

// Function to calculate Fibonacci using recursion
int fibonacci(int n) {
    if (n <= 1) return n;  // Base cases
    return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive step
}

int main() {
    int fibIndex = 6;
    printf("Fibonacci number at position %d is %d\n", fibIndex, fibonacci(fibIndex));
    return 0;
}
