/**
 * Helper program to generate repetitive HDL gates
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Usage: ./generate_gates INPUTS GATE BITS\n");
        exit(1);
    }

    long ninputs, nbits = 0l;
    char *inputs = argv[1];
    char *gate = argv[2]; // eg And, Or
    char *bits = argv[3];

    char *p0, *p1;
    ninputs = strtol(inputs, &p0, 10);
    nbits = strtol(bits, &p1, 10);

    int i=0;
    for (i; i < nbits; i++) {
        if (ninputs == 1) {
            printf("%s(in=in[%d], out=out[%d]);\n", gate, i,i);
        }
        else if (ninputs == 2) {
            printf("%s(a=a[%d], b=b[%d], out=out[%d]);\n", gate, i,i,i);
        }
        else if (ninputs == 3) {
            printf("%s(a=a[%d], b=b[%d], c=c[%d], out=out[%d]);\n", gate, i,i,i,i);
        }
        else if (ninputs == 4) {
            printf("%s(a=a[%d], b=b[%d], c=c[%d], d=d[%d], out=out[%d]);\n", gate, i,i,i,i,i);
        }
        else {
            printf("This program only works with a max of 4 inputs!\n");
            exit(1);
        }
    }

    return 0;
}