#include <stdio.h>
#include <ctype.h> // Include for tolower()

void checkCharacter(char ch) {
    ch = tolower(ch); // Convert to lowercase for consistent vowel check

    if (ch >= 'a' && ch <= 'z') { 
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            printf("Vowel\n");
        else
            printf("Consonant\n");
    } 
    else if (ch >= '0' && ch <= '9') { 
        printf("Digit\n");
    } 
    else {
        printf("Special Character\n");
    }
}

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch); // Space before %c ignores whitespace

    checkCharacter(ch);

    return 0;
}
