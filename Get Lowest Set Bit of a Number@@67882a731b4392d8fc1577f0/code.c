#include <stdio.h>

int findLowestSetBitPosition(int num) {
    return (num == 0) ? -1 : __builtin_ctz(num) + 1;
}

int main() {
    int num;
    scanf("%d", &num);

    int pos = findLowestSetBitPosition(num);
    printf("Lowest set bit is at position: %d\n", pos);

    return 0;
}