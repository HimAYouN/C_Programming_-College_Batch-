#include <stdio.h>

int main() {
    int a, b, c;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Nested if to find maximum
    if (a > b) {
        if (a > c) {
            printf("Maximum is: %d\n", a);
        } else {
            printf("Maximum is: %d\n", c);
        }
    } else {
        if (b > c) {
            printf("Maximum is: %d\n", b);
        } else {
            printf("Maximum is: %d\n", c);
        }
    }

    return 0;
}
