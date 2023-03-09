#include <stdio.h>
#include <stdint.h>

_Static_assert(sizeof(uint8_t) == 1, "uint8_t must be 1 byte");

int main() {
    uint8_t a = 0b11001100;
    uint8_t b = 0b00110011;
    uint8_t c = ~a;
    uint8_t d = a & b;
    uint8_t e = a | b;
    uint8_t f = a ^ b;
    uint8_t g = a >> 2;
    uint8_t h = b << 3;

    _Static_assert(a != b, "a and b must be different");
    _Static_assert(c == 0b00110011, "c must be equal to 0b00110011");
    _Static_assert(d == 0b00000000, "d must be equal to 0b00000000");
    _Static_assert(e == 0b11111111, "e must be equal to 0b11111111");
    _Static_assert(f == 0b11111111, "f must be equal to 0b11111111");
    _Static_assert(g == 0b00110011, "g must be equal to 0b00110011");
    _Static_assert(h == 0b10011000, "h must be equal to 0b10011000");

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("d = %d\n", d);
    printf("e = %d\n", e);
    printf("f = %d\n", f);
    printf("g = %d\n", g);
    printf("h = %d\n", h);

    return 0;
}
