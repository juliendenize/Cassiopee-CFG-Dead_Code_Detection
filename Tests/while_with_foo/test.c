#include <stdio.h>

int foo(int a) {
    if (a > 0) return -a;
    return a;
}

int main(int argc, char *argv[]) {
    int b = 3;

    do {
        if (foo(b) > 3) {
            printf("Large\n");
        }
        else {
            printf("Small\n");
        }
    } while(b != 3);

    return 0;
}