#include<stdio.h>

// Function to check if a number is prime or not
int primenotprime(int n) {
    if (n <= 1) {
        return 0;  // Not prime
    }

    for (int i = 2; i * i <= n; i++) {  // No need to go beyond sqrt(n)
        if (n % i == 0) {
            return 0;  // Not prime
        }
    }

    return 1;  // Prime
}

int main() {
    int n, result;
    
    // Loop to take multiple inputs
    while (scanf("%d", &n) == 1) {  // Keep reading numbers until the input is not valid
        result = primenotprime(n);  // Check if the number is prime
        printf("%d\n", result);  // Print the result: 1 for prime, 0 for not prime
    }

    return 0;
}