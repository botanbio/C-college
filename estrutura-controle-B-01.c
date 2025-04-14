#include <stdio.h>

int main(){

    int numEnt;

    printf("Digite um número inteiro positivo ou negativo: ");

    scanf("%i", &numEnt);

    if(numEnt > 0){
        printf("É um número positivo!");
    }
// %i ou %d, vai funcionar, o mais convencional é %d
    return 0;
}
