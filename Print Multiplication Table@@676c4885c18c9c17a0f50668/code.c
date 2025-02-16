#include <stdio.h>

int main() {
    int num, limit;

    scanf("%d", &num);
    scanf("%d", &limit);

    printf("%d\n", num);
    for (int i = 1; i <= limit; i++) {
        printf("%d × %d = %d\n", num, i, num * i);
    }

    return 0;
}
