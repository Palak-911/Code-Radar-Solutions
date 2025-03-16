#include<stdio.h>

int main() {
    int a, b;
    char o;

    // Take input for two integers and the operator
    scanf("%d %d %c", &a, &b, &o);

    // Perform the operation based on the operator
    if (o == '+') {
        printf("%d", a + b);  // Addition
    } else if (o == '-') {
        printf("%d", a - b);  // Subtraction
    } else if (o == '*') {
        printf("%d", a * b);  // Multiplication
    } else if (o == '/') {
        if (b != 0) {
            printf("%d", a / b);  // Division (check if b != 0)
        }
    }

    return 0;
}