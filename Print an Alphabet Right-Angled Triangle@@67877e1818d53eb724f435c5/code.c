#include <stdio.h>

int main() {
    int N;

    
    scanf("%d", &N);

    // Loop to print the reverse right-angled triangle with alphabets
    for (int i = 1; i <= N; i++) {
        char ch = 'A'; // Start from 'A' in each row
        for (int j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++; // Move to next alphabet
        }
        printf("\n");
    }

    return 0;
}
