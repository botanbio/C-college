#include <stdio.h>
int main(){
    float z, q;
    FILE *p;
    p = fopen("TAREFA_8.TXT", "w");
    for(z = 1000; z <= 100000; z = z + 1000){
        q = z * z;
        fprintf(p,"O quadrado de %3.0f eh %5.0f\n", z, q);
    }
    fclose(p);
    return 0;
}
