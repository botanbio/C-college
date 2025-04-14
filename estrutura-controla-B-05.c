#include <stdio.h>

int main(){

    int numTeste;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numTeste);

    if(numTeste == 0){
        printf("O numero digitado e zero!");
    }else{
        printf("O numero digitado nao e zero!");
    }

    return 0;
}
