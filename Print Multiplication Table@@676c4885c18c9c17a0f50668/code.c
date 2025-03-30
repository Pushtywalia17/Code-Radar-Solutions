#include <stdio.h>
int main() {
    int num, range;
    
    // Input the number and range
    scanf("%d %d", &num, &range);

    for (int i = 1; i <= range; i++) {    // Loop from 1 to the range
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
