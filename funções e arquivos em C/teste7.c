#include <stdio.h>
int main(){
    int z, q;
    FILE *p;
    p = fopen("TAREFA_7.TXT", "w");
    for(z=-10; z<11; z++){
        q = z * z;
        fprintf(p,"O quadrado de %3d eh %5d\n", z,q);
    }
    fclose(p);
    return(0);
}
