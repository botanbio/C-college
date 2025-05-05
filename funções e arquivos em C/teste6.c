#include <stdio.h>
int main(){
    int k = 1234;
    FILE *p; //define um ponteiro para uso com arquivo
    p = fopen("RESULTADO.TXT", "w"); //cria um arquivo para exportar os dados. "w" é minusculo
    fprintf(p,"O conteudo da variavel k eh: %d\n", k); //escreve os dados no arquivo
    fclose(p); // fecha o arquivo antes de encerrar o programa
    return(0);
}
