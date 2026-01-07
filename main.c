#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    TODO: ✅ Function Pointers for callbacks
    TODO: ✅ strings (char* )
    TODO: ✅ malloc calloc
    TODO: ✅ by reference var passing into functions (instead of copy)
    TODO: ✅ structs
    TODO: ✅ typedef (in structs.c)
    TODO: ✅ unions
    TODO: ✅ enum
    TODO: ✅ static var
    TODO: ✅ macros
    TODO: ✅ update vim rc to disable copilot 
    TODO: ✅ Git common workflow
    TODO: ✅ Dockerfile with FROM scratch for fastest possible container
    TODO: ✅ Revisit malloc
    TODO: ✅ recursion
    TODO: header files.h
    TODO: Bitshifting / Bitwise operators
    TODO: bitwise logic operators vs bitshifiting operators
    TODO: careful about memory boundries (over/under runs)
    TODO: Networking with sockets
    TODO: Heap/Stack allocation ( differences )  Heap with Malloc
    TODO: reading files
    TODO: reading and writing STDIO STDERR
    TODO: ...
*/

char* getName() {
    char* name = malloc(sizeof(char)*10);
    printf("Enter your name:");
    scanf("%s", name);
    return name;
}

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
    char* name = "kunstewi";
    char* nameStephen = "Stephen";
    char* nameSAQ = "SAQ-3000";
    char* dynName = getName();

    printf("Hello %s!\n", name);
    printf("Hello %s!\n", nameStephen);
    printf("Hello %s!\n", nameSAQ);
    printf("Hello %s!\n", dynName);

    free(dynName);

    return 0;
}

