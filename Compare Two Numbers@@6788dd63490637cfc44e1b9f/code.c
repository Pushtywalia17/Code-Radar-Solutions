#include <stdio.h>
int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2); 
    if (num1 == num2) {
        printf("Positive");
    } else if (num1 > num2) {
        printf("First");
    }
    else {
        printf("Second");
    }
return 0;
}