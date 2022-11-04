#include <stdio.h>
#include <stdint.h>


void toBits(uint8_t *p)
{
    int a[8] = {0};
    for(int i=0; i<8; i++)
    {
        if(((1 << i) & *p) == (1 << i))
        {
            a[7 - i] = 1;
        } 
    }

    for (int i=0; i<8; i++)
    {
        printf("%d", a[i]);
    }
}