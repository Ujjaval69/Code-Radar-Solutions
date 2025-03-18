#include <stdio.h>

int main() {
    int N;

    
    scanf("%d", &N);

    // Loop to print the pyramid pattern
    for (int i = 1; i <= N; i++) {
        // Print spaces for center alignment
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        // Print numbers from 1 to i
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
