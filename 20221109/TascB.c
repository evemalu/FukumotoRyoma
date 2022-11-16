#include <stdlib.h>


int main(void){
int a[100];
int i;
int tmp;

for (i = 0; i < 100; i++){
    a[i] = i;
}
    

    	for (int k = 0; k < 100; k++)
	{
		for (int p = k + 1; p < 100; p++)
		{
			if (a[k] > a[p])
			{
				tmp = a[k];
				a[k] = a[p];
				a[p] = tmp;
			}
		}
	}
}
