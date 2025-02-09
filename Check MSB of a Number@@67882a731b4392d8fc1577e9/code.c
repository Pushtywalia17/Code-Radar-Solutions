#include <stdio.h>

int main() {
    int num1;
    scanf("%d", &num1);
    int msb_mask = 1<<31;
    if (num1 & msb_mask){
    printf("Set");
    } else {
        printf("Not Set");
    }
    return 0;
}