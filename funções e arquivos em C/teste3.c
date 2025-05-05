#include <stdio.h>
int s(int j){
    int q = j + j;
    return(q);
}
int main(){
    for(int i=1; i<101; i++){
        printf("%3d vale o dobro de %3d\n", s(i), i);
    }
    return 0;
}
