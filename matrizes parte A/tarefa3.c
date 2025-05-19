#include <stdio.h>
int main(){
    int mat[7][7];
    srand(123);
    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 7; j++)
            printf("%4d", mat[i][j] = rand() % 7 + 5);
        printf("\n");
    }
    return 0;
}
