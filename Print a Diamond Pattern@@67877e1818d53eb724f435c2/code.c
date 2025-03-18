#include <stdio.h>

int main() {
    int N;

    // Input from user
    
    scanf("%d", &N);

    // Upper half of the diamond
    for (int i = 1; i <= N; i++) {
        // Print spaces
        for (int j = 1; j <= N - i; j++) {
            printf("  ");
        }
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("* ");
        }
        printf("\n");
    }

    // Lower half of the diamond
    for (int i = N - 1; i >= 1; i--) {
        // Print spaces
        for (int j = 1; j <= N - i; j++) {
            printf("  ");
        }
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
