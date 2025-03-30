#include <stdio.h> 
int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {           // Loop for rows
        // Print leading spaces
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }

        // Print increasing part of the palindrome
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Print decreasing part of the palindrome
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
