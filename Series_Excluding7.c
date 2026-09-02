#include <stdio.h>

void modifyByValue(int x) {
    x = x + 10;
}

void modifyByReference(int *a) {
    *a = *a + 10;
}

int main() {
    int x = 5, y = 5;

    modifyByValue(x);
    modifyByReference(&y);

    printf("After Call by Value: x = %d\n", x);       // Output: 5
    printf("After Call by Reference: y = %d\n", y);   // Output: 15

    return 0;
}

