#include <stdio.h>
#include <assert.h>

int main(void) {
    // Define variables with initializer list
    int num1 = {10};
    int num2 = {20};
    int sum = num1 + num2;

    // Print the result
    printf("The sum of %d and %d is %d.\n", num1, num2, sum);

    // Perform static assert
    _Static_assert(sizeof(int) == 4, "Integer size must be 4 bytes.");

    return 0;
}
