#include <stdio.h>

int main() {
    int N;

   
    scanf("%d", &N);

    // Loop to print the hollow square pattern
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            // Print '*' for the first & last row, or first & last column
            if (i == 0 || i == N - 1 || j == 0 || j == N - 1) {
                printf("* ");
            } else {
                printf("  "); // Print space for the hollow part
            }
        }
        printf("\n");
    }

    return 0;
}
