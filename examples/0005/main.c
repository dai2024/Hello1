#include <stdio.h>
#include <stdlib.h>

void safe_function() {
    printf("This function is safe.\n");
}

int main() {
    printf("Calling safe function...\n");
    safe_function();
    printf("This line will be executed.\n");
    return 0;
}
