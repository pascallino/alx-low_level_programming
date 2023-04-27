#include <stdio.h>

void print_intro();

void (*intro_func)(void) __attribute__((constructor));

int main() {
    print_intro();
    // rest of the main function code goes here
    return 0;
}

void print_intro() {
    printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

void intro_func(void) {
    print_intro();
}
