// gcc bof.c -no-pie -o bof

#include <stdio.h>
#include <stdlib.h>

void win() {
    FILE *fp;
    char flag[32];
    fp = fopen("flag.txt", "r");

    if(fp == NULL){
        printf("Error\n");
        exit(-1);
    }

    fgets(flag, 32, fp);
    printf("%s", flag);

    fclose(fp);
    return;

}

void main() {
    char buf[16];

    scanf("%s", buf);
    printf("%s\n", buf);

    return;
}