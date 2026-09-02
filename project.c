#include <stdio.h>


void oddEven(int num) {
    if (num % 2 == 0)
        printf("%d is Even.\n", num);
    else
        printf("%d is Odd.\n", num);
}
void positiveNegative(int num) {
    if (num > 0)
        printf("%d is Positive.\n", num);
    else if (num < 0)
        printf("%d is Negative.\n", num);
    else
        printf("%d is Zero.\n", num);
}
void factorial(int num) {
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return;
    }
    long long fact = 1;
    int i;
    for (i = 1; i <= num; i++) {
        fact *= i;
    }
    printf("Factorial of %d is %lld.\n", num, fact);
}

int main() {
    int num;
    char choice;

    while (1) {
        printf("\nMenu:\n");
        printf("A: Find Odd or Even\n");
        printf("B: Find Positive or Negative\n");
        printf("C: Find the Factorial value\n");
        printf("D: Exit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        if (choice == 'D' || choice == 'd') {
            printf("Exiting the program. Goodbye!\n");
            break;
        }

        printf("Enter an integer: ");
        scanf("%d", &num);

        switch (choice) {
            case 'A':
            case 'a':
                oddEven(num);
                break;
            case 'B':
            case 'b':
                positiveNegative(num);
                break;
            case 'C':
            case 'c':
                factorial(num);
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
