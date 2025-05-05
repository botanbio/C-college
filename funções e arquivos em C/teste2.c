#include <stdio.h>
int main(){
    float z, q;
    for(z = 1000; z < 100000; z = z + 1000){
        q = z * z;
        printf("O quadrado de %3.0f eh %5.0f\n", z, q);
    }
    return 0;
}
