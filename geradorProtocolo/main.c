#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Este bloco de código será responsável pelo controle de protocolos abertos pelo usuário.
// Usuário padrão = admin
// Senha padrão = 1234

int main(void){
    srand(time(0));
    char user[6] = "admin";
    char message[50];
    int password = 1234;
    int ticket = 100000;
    int aleatorio = (rand() % 99999);
    ticket = ticket + aleatorio;

    printf("--------------------------------------\n");
    printf("Gerador de Protocolo de Homologação\n");
    printf("--------------------------------------\n");

    printf("---------------------\n");
    printf("Informe seu usuário: \n");
    printf("---------------------\n");
    gets(user);
    fflush(stdin);
    
    printf("-------------------\n");
    printf("Informe sua senha: \n");
    printf("-------------------\n");
    scanf("%i", &password);
    fflush(stdin);

    printf("Gerando nova solicitação de protocolo...\n");
    printf("Informe o objetivo da solicitação do protocolo: \n");
    gets(message);
    fflush(stdin);

    printf("%i | %s \n", ticket , message);

    system("pause \n");
    return 0;
}