#include <stdio.h>

int isPrime(int n) {
    if (n < 2) return 0; // Numbers less than 2 are not prime
    
    for (int i = 2; i * i <= n; i++) { // Check divisibility up to sqrt(n)
        if (n % i == 0) {
            return 0; // Not a prime number
        }
    }
    return 1; // Prime number
}

