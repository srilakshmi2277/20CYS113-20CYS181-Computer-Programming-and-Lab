#include <stdio.h>

struct complexno {
    int a;
    int b;
};

int main() {
    int a, b, c, d;
    struct complexno complex[2];

    scanf("%d %d", &complex[0].a, &complex[0].b);
    scanf("%d %d", &complex[1].a, &complex[1].b);

    a = complex[0].a + complex[1].a;
    b = complex[0].b + complex[1].b;
    c = complex[0].a - complex[1].a;
    d = complex[0].b - complex[1].b;

    printf("%d+%di\n", a, b);
    printf("%d+%di\n", c, d);

    return 0;
}
