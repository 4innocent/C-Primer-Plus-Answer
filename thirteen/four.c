#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* args[]) {
    if (argc < 2) {
        fprintf(stderr, "please input one argument at least！");
        exit(0);
    }

    for (int i = 1; i < argc; i++) {
        printf("%s\n", args[i]);
    }


    return 0;
}