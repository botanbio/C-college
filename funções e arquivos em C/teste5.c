#include <stdio.h>
int s(int j){
    int q = j + j;
    return(q);
}
int triplo(int valor){
    int quant = valor + valor + valor;
    return(quant);
}
int main(){
    printf("NUMERO | DOBRO | TRIPLO\n");
    for(int i=-25; i<=15; i = i + 2){
        printf("%3d  |  %3d  |  %3d\n", i, s(i), triplo(i));
    }
    return 0;
}
