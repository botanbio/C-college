#include <stdio.h>

int main(){

    int numEnt;

    printf("Digite um n�mero inteiro positivo ou negativo: ");

    scanf("%i", &numEnt);

    if(numEnt > 0){
        printf("� um n�mero positivo!");
    }
// %i ou %d, vai funcionar, o mais convencional � %d
    return 0;
}
