#include <stdio.h>

int main(){
    int numTeste;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numTeste);

    if(numTeste != 0){
        printf("O numero digitado não é zero!");
    }else{
        printf("O numero digitado é zero!");
    }
    return 0;
}
