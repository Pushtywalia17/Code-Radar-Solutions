#include <stdio.h> 
int main() {
    int N;
    scanf("%d", &N);
    for(int i= 1; i<=N; i++) {
        char ch = 'A'
        for (int j=1; j<= N - i; j++) {
    printf(" ");        
        }
        for (int k = 1; k <= i; k++) { 
            ch++
            printf("%d ", k);
        }
    printf("\n");
    }
return 0;
}