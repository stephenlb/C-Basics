#include <stdio.h>
#include <stdlib.h>

char* make_string(int number_of_chars) {
    char* str = malloc(number_of_chars);
    return str;
}

int main() {
    char* str = make_string(100);
    printf("hello!");
    return 0;
}
