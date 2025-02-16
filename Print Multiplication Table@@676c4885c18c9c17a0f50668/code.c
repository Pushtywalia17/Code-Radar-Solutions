#include <stdio.h>

int main() {
    int num, limit;

    // Taking input from the user
    scanf("%d", &num);

    scanf("%d", &limit);

    // Printing the multiplication table header
    printf("Multiplication Table of %d:\n", num);

    // Loop to print the table
    for (int i = 1; i <= limit; i++) {
        printf("%d × %d = %d\n", num, i, num * i);
    }

    return 0;
}
