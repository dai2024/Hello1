#include <stdio.h>

struct Data {
    int a;
    char b;
} __attribute__((aligned(8)));

int main() {
    printf("Size of struct Data: %ld\n", sizeof(struct Data));
    return 0;
}
