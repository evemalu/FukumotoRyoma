#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>

int main(void)
{
    int v2 = rand % 100;
    int h[10] = {v2};


    for (int i = 0; i < 10; ++i)
    {
        
        printf("%d\n", h[i]);
    }

    return 0;
}