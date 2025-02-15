#include <stdio.h>
int main() {
    int num1;
    scanf("%d", &num1);
    if (num1>0) {
        printf("Positive", num1);
    } 
    else if (num1<0) {
        printf("Negative", num1)
    }
    else {
    printf("Zero", num1);
    }
    return 0;
}