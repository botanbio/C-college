#include <stdio.h>

int main(){


    int i, num=12, soma;

    for(i=1; i<=12; i++){
        printf("\nIteracao %d --> ", i);
        printf("Numero = %d", num);

        soma = soma + num;

        if(i==10){
            printf("\n");}


        num--;
    }

    printf("\nSomatorio: %d", soma);

    return 0;

    // não precisa usar & no printf!!!
}
