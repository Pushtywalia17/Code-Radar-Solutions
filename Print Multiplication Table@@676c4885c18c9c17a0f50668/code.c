#include <stdio.h>

int main() {
    int num, limit;

    // Taking input from the user
    if (scanf("%d", &num) != 1 || scanf("%d", &limit) != 1) {
        printf("Invalid input! Please enter integers only.\n");
        return 1;  // Exit the program with an error code
    }

    // Printing the multiplication table
    printf("Multiplication Table of %d:\n", num);
    for (int i = 1; i <= limit; i++) {
        printf("%d × %d = %d\n", num, i, num * i);
    }

    return 0;
}
