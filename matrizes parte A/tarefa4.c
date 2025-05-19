#include <stdio.h>
int main(){
    int mat[5][8];
    srand(123);
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 8; j++)
            printf("%5d", mat[i][j] = rand() % 7 + 7);
        printf("\n");
    }
    return 0;
}
