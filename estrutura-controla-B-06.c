#include <stdio.h>

int main(){
    int numTeste;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numTeste);

    if(numTeste != 0){
        printf("O numero digitado n�o � zero!");
    }else{
        printf("O numero digitado � zero!");
    }
    return 0;
}
