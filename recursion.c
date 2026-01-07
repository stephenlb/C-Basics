#include <stdlib.h>
#include <stdio.h>

int sivan_fib(int number) {
    if (number <= 1) return number;
    return sivan_fib(number-1) + sivan_fib(number-2);
}

int main() {
    int out = sivan_fib(10);
    printf("out = %d", out);
    return 0;
}
