#include <stdio.h>
#include <stdlib.h>

__attribute__((noreturn)) void dangerous_function() {
    printf("This function is about to cause a segmentation fault!\n");
    char* null_pointer = NULL;
    *null_pointer = 42;
}

int main() {
    printf("Calling dangerous function...\n");
    dangerous_function();
    printf("This line will not be executed.\n");
    return 0;
}
