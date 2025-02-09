#include<stdio.h>

int main() {
    int n, is_prime = 1;

    // Input the number
    scanf("%d", &n);

    // Check if number is less than 2
    if (n < 2) {
        printf("Not Prime");
        return 0;
    }

    // Loop to check for divisors
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            is_prime = 0; // Not prime
            break;
        }
    }

    // Print result
    if (is_prime) {
        printf("Prime");
    } else {
        printf("Not Prime");
    }

    return 0;
}
