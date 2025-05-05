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
    FILE *p;
    p = fopen("TAREFA_10.TXT", "w");
    fprintf(p,"NUMERO | DOBRO | TRIPLO\n");
    for(int i=-25; i<=15; i = i + 2){
        fprintf(p,"%3d  |  %3d  |  %3d\n", i, s(i), triplo(i));
    }
    fclose(p);
    return 0;
}
