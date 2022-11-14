//gcc -o cal cal.c

#include <stdio.h>
#include <stdint.h> 
#define uint128_t __uint128_t

void main()
{
    uint64_t v15;
    int64_t v14;
    uint64_t v12 = 1LL;

    for(int i = 0; i <= 30; i++)
    {
        v14 = v12 / 0x16 + 2 * (v12 / 0x16 + (((0x2E8BA2E8BA2E8BA3LL * (unsigned __int128)v12) >> 64) & 0xFFFFFFFFFFFFFFFCLL));
        
        v15 = v12++;
        printf("v14 = %lld\tv15 - 2 * v14 = %lld\n", v14, v15 - 2 * v14);
    }
}