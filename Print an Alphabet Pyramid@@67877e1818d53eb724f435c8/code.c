#include <stdio.h>

int main() {
    int N;

   
    scanf("%d", &N);

    // Loop to print the alphabet pyramid
    for (int i = 1; i <= N; i++) {
        // Print spaces for alignment
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        // Print alphabets from A to current row number
        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }

    return 0;
}
