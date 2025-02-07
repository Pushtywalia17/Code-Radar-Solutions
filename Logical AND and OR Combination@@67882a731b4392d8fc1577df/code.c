#include <stdio.h>

int main() {
    int num1, num2;
    if (num1>0 || num2<0){
        printf("True\n");
    }
    else if (num1==0 && num2==0){
        printf("False\n");
    }
    return 0;
}