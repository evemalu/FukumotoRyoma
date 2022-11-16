#include <stdlib.h>

void shuffle(int array[], int size) {
    for(int i = 0; i < size; i++) {
        int j = rand()%size;
        int t = array[i];
        array[i] = array[j];
        array[j] = t;
    }
}

int main(void){
    int list[11] = {0,1,2,3,4,5,6,7,8,9,10};

    shuffle(list, 11);
    
        printf("%d,", list[5]);
    
    return 0;
}