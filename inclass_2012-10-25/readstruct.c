#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "shared.h"

int main(int argc, char *argv[])
{
    FILE *fp;

    fp = fopen("file.data", "r");

    struct person p;

    fread(&p, sizeof(p), 1, fp);

    printf("name: %s\n", p.name);
    printf("rating: %d\n", p.rating);

    fclose(fp);


    return 0;

}
