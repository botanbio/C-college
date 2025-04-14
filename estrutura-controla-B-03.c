#include <stdio.h>

int main(){

    int entNum;

    printf("Digite um numero inteiro positivo ou negativo: ");
    scanf("%d", &entNum);

    if(entNum >= 0){
        printf("E um numero positivo!");
    }

    if(entNum < 0){
        printf("E um numero negativo!");
    }
    return 0;
}
