#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 0;
    int num_aleat;
    srand(12345);

    do{
        num_aleat = rand() % 200;
        printf("Numero aleatorio %d: %d.\n", i, num_aleat);
        i++;
    }
    while(i < 8);

    return 0;
}
