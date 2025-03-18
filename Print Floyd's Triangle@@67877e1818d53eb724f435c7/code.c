#include <stdio.h>

int main() {
    int N, num = 1;

    
    scanf("%d", &N);

    // Loop to print Floyd's Triangle
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++; // Increment number
        }
        printf("\n");
    }

    return 0;
}
