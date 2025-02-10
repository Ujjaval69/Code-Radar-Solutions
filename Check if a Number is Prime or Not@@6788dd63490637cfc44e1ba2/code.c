#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n < 2) 
        printf("Not prime");
    else if (n == 2 || n == 3 || n == 5 || n == 7 || n == 11 || n == 13 || n == 17 || n == 19 || 
             n == 23 || n == 29 || n == 31 || n == 37 || n == 41 || n == 43 || n == 47) 
        printf("Prime");
    else if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0 || n % 11 == 0 || 
             n % 13 == 0 || n % 17 == 0 || n % 19 == 0 || n % 23 == 0 || n % 29 == 0 || 
             n % 31 == 0 || n % 37 == 0 || n % 41 == 0 || n % 43 == 0 || n % 47 == 0) 
        printf("Not prime");
    else 
        printf("Prime");

    return 0;
}
