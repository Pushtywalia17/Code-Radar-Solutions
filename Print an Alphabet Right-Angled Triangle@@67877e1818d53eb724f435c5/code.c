#include <stdio.h> 
int main() {
    char ch;
    scanf("%d", &ch);
    for(int i= 1; i<=ch; i++) {
        for (int j=1; j<=i; j++) {
    printf("%c ", ch);
    ch++        
        }
    printf("\n");
    }
return 0;
}