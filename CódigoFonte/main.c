#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_CPF 12
#define MAX_NOME 50
#define MAX_SENHA 20

struct usuario {
    char cpf[MAX_CPF];
    char nome[MAX_NOME];
    char senha[MAX_SENHA];
};

int main() {
    struct usuario usuarios[100];
    int num_usuarios = 0; 
    int valido = 0;
    char resposta = 's';

    while (resposta == 's' && num_usuarios < 100) {

        struct usuario novo_usuario;

        valido=0;
        while (!valido) {
            printf("Digite o CPF (somente numeros): ");
            setbuf(stdin, 0);
            fgets(novo_usuario.cpf, MAX_CPF, stdin);

            novo_usuario.cpf[strcspn(novo_usuario.cpf, "\n")] = 0;

            if (strlen(novo_usuario.cpf) != 11) {
            printf("CPF invalido. Digite um CPF com 11 digitos.\n");
            } else {
                valido = 1;
            }
        }
            printf("Informe o nome: ");
            setbuf(stdin, 0);
            fgets(novo_usuario.nome, MAX_NOME, stdin);

            valido = 0;
        while (!valido) {
            printf("Informe a senha: ");
            setbuf(stdin, 0);
            fgets(novo_usuario.senha, MAX_SENHA, stdin);

            novo_usuario.senha[strcspn(novo_usuario.senha, "\n")] = 0;

            if (strlen(novo_usuario.senha) != 8) {
            printf("SENHA invalida. Digite uma que possua 8 caracteres.\n");
            setbuf(stdin, 0);
            } else {
            valido = 1;
            }
        }
            novo_usuario.cpf[strcspn(novo_usuario.cpf, "\n")] = 0;
            novo_usuario.nome[strcspn(novo_usuario.nome, "\n")] = 0;
            novo_usuario.senha[strcspn(novo_usuario.senha, "\n")] = 0;


            usuarios[num_usuarios] = novo_usuario;
            num_usuarios++;


            printf("Deseja cadastrar outro usuario? (s/n) ");
            setbuf(stdin, 0);
            scanf("%c", &resposta);
            getchar(); 


    }
}