#include <stdio.h>

int main() {
    int N;

   
    scanf("%d", &N);

    // Loop to print the pyramid pattern
    for (int i = 1; i <= N; i++) {
        // Print spaces for alignment
        for (int j = 1; j <= N - i; j++) {
            printf("  ");
        }
        // Print numbers
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
