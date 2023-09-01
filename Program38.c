/*PROGRAM USING RECURSION(print hello world 3 times)*/

#include <stdio.h>

void hello(int x);

int main() {
    int x = 1;
    hello(x);
    return 0;
}

void hello(int x) {
    if (x <= 3) {
        printf("hello world\n");
        x++;
        hello(x);
    }
}
