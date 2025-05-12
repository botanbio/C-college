#include <stdio.h>
#include <stdlib.h>

int main(){
    int num_aleat;
    srand(12345);
    num_aleat = rand() % 10;
    printf("O numero aleatorio gerado foi %d.\n", num_aleat);
    return 0;
}
