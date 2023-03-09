#include <stdio.h>
#include <assert.h>

int main() {

    // Use _Static_assert to check a condition at compile-time
    _Static_assert(sizeof(int) == 4, "int must be 4 bytes");

    int x = 5;
    int y = 10;

    // Use the && (and) logical operator to only display a message if both conditions are true
    if (x > 0 && y > 0) {
        printf("Both x and y are positive\n");
    }

    // Use the || (or) logical operator to display a message if either condition is true
    if (x > 0 || y > 0) {
        printf("At least one of x and y is positive\n");
    }

    // Use the ! (not) logical operator to negate a condition
    if (!(x == y)) {
        printf("x is not equal to y\n");
    }

    // Use the assert macro to check a condition at runtime
    assert(x != y);

    int z;
    printf("Enter a value for z: ");
    scanf("%d", &z);
    printf("You entered: %d\n", z);

    return 0;
}
