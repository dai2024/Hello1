#include <stdio.h>
#include <assert.h>

int main(void) {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    
    assert(num1 != num2);
    printf("The two integers are different.\n");
    
    _Static_assert(sizeof(int) == 4, "Integer size must be 4 bytes.");
    printf("Integer size is 4 bytes.\n");
    
    return 0;
}
