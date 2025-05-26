#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define L 10 // definir no começo para não precisar definir dentro do código
#define C 100
int main(){
    char mat[10][100];
    srand(time(NULL));
    for(int i=0; i<L; i++){
        for(int j=0; j<C; j++){
                mat[i][j] = 'O';
        }
    }

    for(int i=0; i< L; i++){
        int aleat = rand() % C;
        mat[i][aleat] = '_';
    }

    for(int i=0; i<L; i++){
        for(int j=0; j<C; j++){
            printf("%c", mat[i][j]);
        }
        printf("\n");
    }

return 0;
}
