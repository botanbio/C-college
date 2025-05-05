#include <stdio.h>
int main(){
    float numeros[3];
    for(int i=0; i < 3; i++){
        printf("Digite o valor para o indice %d: ", i);
        scanf("%3f", &numeros[i]);
    }

    printf("\nVETOR DIGITADO\nElementos:");
    for(int i=0; i<3; i++)
        printf("%3.1f  ", numeros[i]);

    printf("\nIndices: ");
    for(int i=0; i<3; i++)
        printf("%3d", i);

    return 0;
}
