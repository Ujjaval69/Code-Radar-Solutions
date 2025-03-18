#include <stdio.h>

int main() {
    int N;

    
    scanf("%d", &N);

    // Loop to print the reverse right-angled triangle with alphabets
    for (int i = 0; i < N; i++) {
        // Print spaces for right alignment
        for (int j = 0; j < i; j++) {
            printf("  ");
        }
        // Print alphabets
        char ch = 'A';
        for (int j = 0; j < N - i; j++) {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }

    return 0;
}
