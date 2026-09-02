#include <stdio.h>

// Recursive function to calculate factorial
long long factorial(int n) {
    // Base case: if n is 0 or 1, return 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Recursive case: n * factorial of (n-1)
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Call the recursive function to calculate the factorial
    long long result = factorial(num);
    
    // Display the result
    printf("Factorial of %d is: %lld\n", num, result);

    return 0;
}
