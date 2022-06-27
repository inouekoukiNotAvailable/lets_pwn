// gcc highson.c -o highson -no-pie -m32

#include <stdio.h>
#include <stdlib.h>

void win() {
    system("sh");
    return;
}

void main() {
    char buf[64];

    fgets(buf, 64, stdin);
    printf(buf);
    puts("End.");
    //win();
    return;
}