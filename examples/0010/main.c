#include <stdio.h>
#include <stdlib.h>

__declspec(noreturn) void fatal_error(const char* msg) {
    printf("Fatal error: %s\n", msg);
    exit(1);
}

struct MyStruct {
    int* data;

    MyStruct() {
        data = (int*)malloc(sizeof(int));
        if (!data) {
            fatal_error("Failed to allocate memory");
        }
    }
};

int main() {
    MyStruct myStruct;
    return 0;
}
