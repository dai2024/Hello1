#include <stdio.h>
#include <stdlib.h>

__declspec(noreturn) void fatal_error(const char* msg) {
    printf("Fatal error: %s\n", msg);
    exit(1);
}

struct MyStruct {
    int* data;

    MyStruct() : data(nullptr) {
        data = new int;
        if (!data) {
            fatal_error("Failed to allocate memory");
        }
    }

    ~MyStruct() {
        if(data) {
            delete data;
            data = nullptr;
        }
    }
};

int main() {
    {
        MyStruct myStruct;
        // ...
        // ...
    }
    return 0;
}
