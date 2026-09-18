#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int c = 30;

    int *pa = &a;
    int *pb = &b;
    int *pc = &c;

    printf("Before swap: a=%d, b=%d, c=%d\n", *pa, *pb, *pc);

    int tmp = *pa;
    *pa = *pb;
    *pb = *pc;
    *pc = tmp;

    printf("After swap: a=%d, b=%d, c=%d\n", *pa, *pb, *pc);

    return 0;
}