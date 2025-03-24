#include <stdio.h>

// Function to check if a number is even
int isEven(int number) {
    if (number % 2 == 0) {
        return 1;  // It's even
    } else {
        return 0;  // It's odd
    }
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isEven(num)) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    return 0;
}