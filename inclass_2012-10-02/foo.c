#include <stdio.h>
#include <stdlib.h>

#include "bar.h"

int main()
{
    int i;
    int x;
    for(i=0; ; i++) {
        if (!(i % 1000000000)) {
            print_num(i);
        }
    }
}

