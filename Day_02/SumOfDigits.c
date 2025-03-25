#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Loop to calculate sum of digits
    while(num != 0) {
        digit = num % 10;     // Get last digit
        sum += digit;         // Add digit to sum
        num = num / 10;       // Remove last digit
    }

    // Output result
    printf("Sum of digits = %d\n", sum);

    return 0;
}


// SAMPLE OUTPUT 

/*
Enter a number: 1234
Sum of digits = 10

*/