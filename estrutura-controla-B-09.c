#include <stdio.h>

int main(){

    int i, num=15;

    do{
        printf("\nNumero %d", i);
        if(i == 7 || i  == 13){
            printf("\nChegamos ao numero %d !!!", i);
        }
        i++;
    }
    while(i<=num);

    return 0;
}
