#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// NOT THREAD SAFE
// Won't polute the global namespace and the data is accessible via a function
int do_something() {
    static int increment = 0;
    increment++;
    return increment;
}

int do_something_else() {
    static int increment = 0; /// DOESN'T MATTER
    int other = 0;
    return ++other;
}

int main() {
// Won't polute the global namespace and the data is accessible via a function
    //int current = 0;
    printf("%d\n", do_something());
    printf("%d\n", do_something());
    printf("%d\n", do_something());
    printf("%d\n", do_something());
    printf("%d\n", do_something());
    printf("%d\n", do_something_else());
    printf("%d\n", do_something_else());
    printf("%d\n", do_something_else());
    printf("%d\n", do_something_else());
    printf("%d\n", do_something_else());
    return 0;
}
