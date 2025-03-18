#include <stdio.h>

int main() {
    int N;

    
    scanf("%d", &N);

    // Loop to print the reverse alphabet right-angled triangle
    for (int i = N; i >= 1; i--) {
        char ch = 'A'; // Start from 'A' in each row
        for (int j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++; // Move to next alphabet
        }
        printf("\n");
    }

    return 0;
}
