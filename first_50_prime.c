#include <stdio.h>

int main() {
    int count = 0;  // Count of prime numbers found
    int num = 2;    // Current number to check
    int i;           // Loop variable
    
    printf("First 50 prime numbers:\n");
    
    while (count < 50) {
        int is_prime = 1;  // Assume number is prime initially
        
        // Check if num is prime
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                is_prime = 0;
                break;
            }
        }
        
        if (is_prime) {
            printf("%3d  ", num);
            count++;
            
            // Print 10 numbers per line
            if (count % 10 == 0) {
                printf("\n");
            }
        }
        num++;
    }
    
    return 0;
}
