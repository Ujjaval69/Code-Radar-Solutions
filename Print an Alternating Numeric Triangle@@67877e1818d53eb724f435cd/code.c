#include <stdio.h>

int main() {
    int N;

   
    scanf("%d", &N);

    // Loop to print the alternating numeric triangle
    for (int i = 1; i <= N; i++) {
        int num = (i % 2 == 1) ? 1 : 0;  // Start with 1 for odd rows, 0 for even rows
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num = 1 - num;  // Toggle between 1 and 0
        }
        printf("\n");
    }

    return 0;
}
