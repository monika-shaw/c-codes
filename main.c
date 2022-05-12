#include <stdio.h>
#include <stdlib.h>

char msg[] = "Hello, world!";

int main(void) {
    fprintf(stderr, "%zu\n", sizeof(msg));
    return EXIT_SUCCESS;
}
