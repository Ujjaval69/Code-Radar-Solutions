#include <stdio.h>

int main() {
    int N;

    
    scanf("%d", &N);

    // Loop to print the reverse alphabet triangle
    for (int i = N; i >= 1; i--) {
        char ch = 'A';  // Start with 'A' in each row
        for (int j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;  // Move to the next letter
        }
        printf("\n");
    }

    return 0;
}
