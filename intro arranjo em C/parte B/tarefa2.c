#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int num_aleat;
    srand(12345);

    for(i = 0; i <= 6; i++){
        num_aleat = rand() % 4;
        printf("Numero aleatorio %d: %d.\n", i, num_aleat);
    }

    return 0;
}
