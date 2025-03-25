#include <stdio.h>

int main() {
    int choice, a, b;

    // Displaying menu
    printf("Menu:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Input numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Using switch-case
    switch(choice) {
        case 1:
            printf("Result = %d\n", a + b);
            break;
        case 2:
            printf("Result = %d\n", a - b);
            break;
        case 3:
            printf("Result = %d\n", a * b);
            break;
        case 4:
            if(b != 0)
                printf("Result = %.2f\n", (float)a / b);
            else
                printf("Division by zero not allowed!\n");
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}


//OUTPUT SAMPLE//
/*
Menu:
1. Add
2. Subtract
3. Multiply
4. Divide
Enter your choice (1-4): 1
Enter two numbers: 10 20
Result = 30

*/