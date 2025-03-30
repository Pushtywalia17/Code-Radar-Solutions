#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0;                      // 0 and 1 are not prime
    }
    
    for (int i = 2; i * i <= num; i++) {  // Loop up to √num
        if (num % i == 0) {
            return 0;                  // Not prime
        }
    }
    return 1;                          // Prime
}

int main() {
    int t;
    scanf("%d", &t);                   // Read number of test cases

    while (t--) {                      // Loop through each input
        int num;
        scanf("%d", &num);             // Read the number
        printf("%d\n", isPrime(num));  // Print 1 if prime, 0 otherwise
    }

    return 0;
}
