#include <stdio.h>


int function() {
    int num1, num2, sum;

    // Input two integers from user
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate the sum
    sum = num1 + num2;

    return sum;
}

int main() {
    
    int ans;

    ans = function();

    // // Print the sum
    printf("Sum: %d\n", ans);
    // printf("Here is your answer");


    return 0;
}

