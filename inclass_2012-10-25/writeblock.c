#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "struct.h"

int main()
{
    struct block blocks[10];
    FILE *fp;

    fp = fopen("datafile.dat", "w");

    strncpy(blocks[0].data, "hello", sizeof(blocks[0].data));
    blocks[0].length = strlen(blocks[0].data) + 1;

    strncpy(blocks[1].data, "bunny", sizeof(blocks[1].data));
    blocks[1].length = strlen(blocks[1].data) + 1;

    strncpy(blocks[2].data, "tigers", sizeof(blocks[2].data));
    blocks[2].length = strlen(blocks[2].data) + 1;

    fwrite(blocks, sizeof(struct block), 10, fp);


    return 0;
}
