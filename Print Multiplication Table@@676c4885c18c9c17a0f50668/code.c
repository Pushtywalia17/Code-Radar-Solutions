#include <stdio.h>
int main() {
    int num;
    
    // Input the number
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++) {     // Loop from 1 to 10
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
