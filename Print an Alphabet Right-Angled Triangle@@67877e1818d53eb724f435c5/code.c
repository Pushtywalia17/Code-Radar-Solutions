#include <stdio.h> 
int main() {
    
    scanf("%d", &ch);
    char ch = 'A';
    for(int i= 1; i<=ch; i++) {
        for (int j=1; j<=i; j++) {
    printf("%c ", ch);
    ch++;       
        }
    printf("\n");
    }
return 0;
}