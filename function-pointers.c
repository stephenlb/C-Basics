#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
   ✅ Function Pointers for callbacks
*/

int one(int number) {
    return number;
}

int dosomething(int (*callback)(int)) {
    int out = 974;
    return callback(out);
}

int main() { 
    unsigned int number = dosomething(*one);
    printf("%d\n\n", number);
    return 0;
}

