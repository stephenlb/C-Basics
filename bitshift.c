/*You are given the task of writing a procedure int_size_is_32() that yields 1 when run on a machine for which an int is 32 bits, and yields 0 otherwise. You are not allowed to use the sizeof operator. Here is a first attempt: The following code does not run properly on some machines 
*/

#include <stdio.h>
#include <stdlib.h>

int is_32_bit_int_system() {
    return 1 << 32 < 0 ? 0 : 1;
}
int main() {
/*
    printf("%d\n", 1<<1);
    printf("%d\n", 1<<2);
    printf("%d\n", 1<<3);
    printf("%d\n", 1<<4);
    printf("%d\n", 1<<32);
    */

    int is32 = is_32_bit_int_system();
    printf("Is 32 Bit: %d\n", is32);
    return 0;
}

/*
When compiled and run on a 32-bit SUN SPARC, however, this procedure returns 0. The following compiler message gives us an indication of the problem:
​warning: left shift count >= width of type

​The Abnormality with SUN SPARC:
​The abnormality is that the SUN SPARC hardware (and many others like x86) implements shift instructions by masking the shift count. Instead of shifting by 32 and resulting in 0, the CPU performs a modulo operation: k \pmod{w}, where w is the word size.
*/
