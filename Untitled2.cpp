#include <stdio.h>
void main() {
    char c;
    printf("Press a key (getchar): ");
    c = getch();  // Waits for Enter key
    printf("\nYou pressed: %c\n", c);
    return 0;
}

