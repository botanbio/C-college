#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LINHAS 3
#define COLUNAS 7
int main(){
    int mat[LINHAS][COLUNAS], soma = 0;
    int matTra[7][3];
    unsigned long long produto = 1; // poderia ser double ou float
    srand(time(NULL));
    for(int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
            printf("%4d", mat[i][j] = rand() % 10 + 3);
            matTra[j][i] = mat[i][j];
            soma += mat[i][j];
            produto *= mat[i][j];
        }
        printf("\n");
    }
    printf("\nA soma da matriz eh: %d", soma);
    printf("\nO produto da matriz eh: %d", produto);
    printf("\nMatriz transposta: \n");

    for(int j = 0; j < COLUNAS; j++){
        for(int i = 0; i < LINHAS; i++)
            printf("%4d", matTra[j][i]);
        printf("\n");
    }

    return 0;
}
