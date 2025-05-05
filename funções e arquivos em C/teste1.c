#include <stdio.h>
int main(){
    int z, q;
    for(z = -10; z < 11; z = z + 1){
        q = z * z;
        printf("O quadrado de %3d eh %5d\n", z, q);
    }
    return 0;
}
