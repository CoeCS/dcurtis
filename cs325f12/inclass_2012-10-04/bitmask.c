#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    char sw = 0;

    // turn on switch 1 and 3

    sw = sw | 0x01;
    //sw = sw | 0x0c;
    sw = sw | 0x08;
    sw = sw | 0x04;

    int i;
    for(i=0; i < 4; i++)
    {
        printf("Bit %d is: %d\n", i,
                (sw & (1 << i)) >> i);
    }

}
