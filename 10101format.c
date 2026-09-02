#include <stdio.h>
//int main() {
//    // Alternative program (b)
    int i,j;
//    for (i = 1; i <= 5; i++) {
//        for ( j = 0; j < i; j++) {
//            // Alternate between 1 and 0 starting with 1 for odd positions
//            printf("%d", (i - j) % 2);
//        }
//        printf("\n");
//    }
//    printf("\n");
//    return 0;
//}

// 1 11 111 1111 


#include <stdio.h>
int main() {
    // Program (a)
    for (i = 1; i <= 5; i++) {
        for ( j = 1; j <= i; j++) {
            printf("1");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
