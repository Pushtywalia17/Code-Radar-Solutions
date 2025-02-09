#include <stdio.h>

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    result = num1 | num2;
    printf("Bitwise OR of %d and %d is: %d\n", result);
    return 0;
}