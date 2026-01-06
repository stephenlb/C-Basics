#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
   ✅ Function Pointers for callbacks
*/

int log_to_disk(int number) {
    // TODO LOG TO DISK
    // TODO Log to statsD
    // TODO Save to local var for prometheous
    return number;
}

int dosomething(int (*whatever)(int)) {
    int out = 974;
    return whatever(out);
}

int main() { 
    unsigned int number = dosomething(*log_to_disk);
    printf("%d\n\n", number);
    return 0;
}

