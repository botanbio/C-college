#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, cont;
    int vet[20];
    int somaVet;
    srand(12345);
    FILE *p;
    p = fopen("vetor_aleatorio.txt", "w");

    for(i=0; i<20;i++){
        vet[i] = rand() % 101 + 1;
        printf("%d.\n", vet[i]);
        somaVet = somaVet + vet[i];
    }
    fprintf(p,"vetor = {");

    for(cont=0; cont<20; cont++){
        if(cont < 19){
            fprintf(p,"%d,", vet[cont]);
        }
        else{fprintf(p,"%d", vet[cont]);}
    }
    fprintf(p,"}");
    fprintf(p,"\nA soma de todos os valores do vetor é = %d", somaVet);
    return 0;
}
