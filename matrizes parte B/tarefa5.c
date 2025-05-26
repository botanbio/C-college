#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int mat[5][5], mat_super[5][5];
    srand(time(NULL)); // time(NULL) gera sequências diferentes

    printf("Matriz original: \n\n");
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("%4d", mat[i][j] = rand() % 10 + 1);
        }
    printf("\n");
    }

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(j <= i){
                mat_super[i][j] = mat[i][j];
            }else{
            mat_super[i][j] = 0;
            }
        }
    }

    printf("Matriz com elementos da diagonal principal para cima e zeros abaixo: \n");
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("%4d", mat_super[i][j]);
        }
    printf("\n");
    }
return 0;
}
