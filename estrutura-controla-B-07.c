#include <stdio.h>

int main(){

    int total, i, numTeste;

    printf("Quantos numeros deseja digitar? ");
    scanf("%d", &total);

    for(i=0; i<total; i++){
        printf("Digite um numero inteiro positivo ou negativo: ");
        scanf("%d", &numTeste);

        if(numTeste >= 0){
            printf("E um numero positivo!\n");
        }else{
            printf("E um numero negativo!\n");
        }
    }
    return 0;
}
