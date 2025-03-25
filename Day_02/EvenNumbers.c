#include <stdio.h>

int main() {
    int i;

    // Using for loop to print even numbers
    printf("Even numbers from 1 to 100:\n");
    for(i = 1; i <= 100; i++) {
        if(i % 2 == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}


//SAMPLE OUTPUT //
/*
Even numbers from 1 to 100:
2 4 6 8 10 ... 100

*/