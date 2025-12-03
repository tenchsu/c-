#include <stdio.h>

int main() {
    int a = 1;
    int b = 2;
    int *p = &a;
    int *q = &b;

    printf("%d %d %d %d\n", a, b, *q, *p);
    return 0;
}
