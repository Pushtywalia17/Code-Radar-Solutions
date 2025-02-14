#include <stdio.h>
int main() {
    int num1;
    scanf("%d", &num1);
    if (num1 % 2 == 0) {
    printf("%d Even \n");
    }
    else{
        printf("%d Odd \n");
    }
    return 0;
}