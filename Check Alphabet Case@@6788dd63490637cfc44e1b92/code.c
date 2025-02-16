#include <stdio.h>

void checkCase(char ch) {
    if (ch>= 'A' && ch<= 'Z')
       printf("Uppercase");
    }    else {
       printf("Lowercase");
    }
}

int main() {
    char ch
    scanf("%c", &ch);
    checkCase(ch);
    return 0;
}