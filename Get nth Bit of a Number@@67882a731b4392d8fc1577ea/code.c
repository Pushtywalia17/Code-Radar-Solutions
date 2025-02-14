#include <stdio.h>
int getNthBit(int num1, int num2) {
    return num1>>num2 & 1;
}

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int bit = getNthBit(num1, num2);
    printf("%d\n", num2, num1, bit);
    return 0;
}