#include <stdio.h>
int main(){
    int mat[3][3];
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++){
            printf("\nDigite o valor para mat[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++)
            printf("%2d", mat[i][j]);
        printf("\n");
    }
    return 0;
}
