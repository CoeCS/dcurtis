#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "struct.h"

int main()
{
    struct block thirdblock;
    int thirdlength;
    char *thirdstring;

    FILE *fp;

    fp = fopen("datafile.dat", "r");

    fseek(fp, sizeof(struct block) * 2, SEEK_CUR);

    fread(&thirdlength, sizeof(thirdlength), 1, fp);
    printf("thirdlength: %d\n", thirdlength);
    
    thirdstring = (char *) malloc( sizeof(char) * thirdlength);
    fread(thirdstring, thirdlength, 1, fp);

    printf("thirdstring: %s\n", thirdstring);


    // fread(&thirdblock, sizeof(struct block), 1, fp);

    // printf("length: %d\n", thirdblock.length);
    // printf("data: %s\n", thirdblock.data);


    return 0;
}
