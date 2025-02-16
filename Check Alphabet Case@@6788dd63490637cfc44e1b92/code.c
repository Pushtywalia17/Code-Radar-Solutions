#include <stdio.h>

void checkCase(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase\n");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase\n");
    } else {
        printf("Not a letter\n");
    }
}

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch); 
    checkCase(ch);
    return 0;
}
