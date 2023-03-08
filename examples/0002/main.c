#include <stdio.h>

struct Data {
    int a;
    char b;
    char padding[3];
};

int main() {
    printf("Size of struct Data: %ld\n", sizeof(struct Data));
    return 0;
}
