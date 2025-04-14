#include <stdio.h>

int main(){
    int total, i, numTeste;

    printf("Quantos numeros deseja digitar? ");
    scanf("%d", &total);

    for(i=0; i<total; i++){
        printf("Digite um numero inteiro: ");
        scanf("%d", &numTeste);

        if(numTeste != 0){
            printf("O numero digitado nao e zero!\n");
        }else{
            printf("O numero digitado e zero!\n");
        }
    }
}
