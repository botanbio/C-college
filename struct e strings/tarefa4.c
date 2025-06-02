#include <stdio.h>
#include <string.h>
int main(){
    typedef struct{
        char nome_e_sobrenome[50];
        int idade;
        unsigned long long cpf;
        float media_final;
    } Turma;
    Turma aluno1, aluno2, aluno3, aluno4;
    strcpy(aluno1.nome_e_sobrenome, "Pedro Sander");
    aluno1.idade = 17;
    aluno1.cpf = 11177711117;
    aluno1.media_final = 7.59;
    strcpy(aluno2.nome_e_sobrenome, "Sara Walker");
    aluno2.idade = 19;
    aluno2.cpf = 11199911119;
    aluno2.media_final = 8.28;
    strcpy(aluno3.nome_e_sobrenome, "Noemi Pereira");
    aluno3.idade = 18;
    aluno3.cpf = 11188811118;
    aluno3.media_final = 8.00;
    strcpy(aluno4.nome_e_sobrenome, "Sueli Slaps & Kisses");
    aluno4.idade = 30;
    aluno4.cpf = 33300033330;
    aluno4.media_final = 10;
    printf("%s, %d anos, cpf: %llu e tem media final %.1f\n",
           aluno1.nome_e_sobrenome,
           aluno1.idade,
           aluno1.cpf,
           aluno1.media_final);
    printf("%s, %d anos, cpf: %llu e tem media final %.1f\n",
           aluno2.nome_e_sobrenome,
           aluno2.idade,
           aluno2.cpf,
           aluno2.media_final);
    printf("%s, %d anos, cpf: %llu e tem media final %.1f\n",
           aluno3.nome_e_sobrenome,
           aluno3.idade,
           aluno3.cpf,
           aluno3.media_final);
    printf("%s, %d anos, cpf: %llu e tem media final %.1f\n",
            aluno4.nome_e_sobrenome,
            aluno4.idade,
            aluno4.cpf,
            aluno4.media_final);

    return 0;
}
