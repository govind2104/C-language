#include <stdio.h>

int main() {
    int num, remainder, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;             // Get the last digit
        reversed = reversed*10 + remainder;  //add it to the reversed number
        num /= 10;                        // Remove the last digit
    }

    printf("Reversed number = %d\n", reversed);

    return 0;
}
