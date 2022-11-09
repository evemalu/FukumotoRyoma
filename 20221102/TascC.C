#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int a;
int u;
int main(void)
{
   srand(time(NULL));

  a = rand() % 100;


    int h[10] = {a,a,a,a,a,a,a,a,a,a};


    for (int i = 0; i < 10; ++i)
    {
        
        printf("%d\n", h[i]);
    }

    return 0;
}