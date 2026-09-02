#include <stdio.h>

// Function to swap two numbers using pointers (call by reference)
int swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    // Input from the user
    printf("Enter two integers:\n");
    printf("x = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);

    // Before swapping
    printf("\nBefore swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    // Calling the swap function
    swap(&x, &y);

    // After swapping
    printf("\nAfter swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}

