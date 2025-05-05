#include <stdio.h>
int s(int j){
    int q = j + j;
    return(q);
}
int main(){
    FILE *p;
    p = fopen("TAREFA_9.TXT", "w");
    for(int i=1; i<101; i++){
        fprintf(p,"%3d vale o dobro de %3d\n", s(i), i);
    }
    fclose(p);
    return 0;
}
