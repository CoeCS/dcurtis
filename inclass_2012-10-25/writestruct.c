#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "shared.h"

int main(int argc, char *argv[])
{
    FILE *fp;

    fp = fopen("file.data", "w");

    struct person p;

    strncpy(p.name, "Donald", 100);
    p.rating = 500;

    printf("name: %s\n", p.name);
    printf("rating: %d\n", p.rating);

    fwrite(&p, sizeof(p), 1, fp);

    fclose(fp);


    return 0;

}
