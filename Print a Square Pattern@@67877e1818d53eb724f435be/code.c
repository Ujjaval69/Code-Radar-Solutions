#include <stdio.h>

int main() {
    int N;

    scanf("%d", &N);

    // Loop to print the square pattern
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
