#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

// Este bloco de código será responsável pelo controle de protocolos abertos pelo usuário.
// Usuário padrão = admin
// Senha padrão = admin

int main(void){
    setlocale(LC_ALL, "portuguese"); // Comando utilizado para utilizar caracteres especiais
    srand(time(0));
    char user[4];
    char password[4];
    char message[50];
    char valid_user[] = "admin";
    char valid_password[] = "admin";
    int ticket = 100000;
    int random = (rand() % 99999);
    int i;
    int repeat;
    ticket = ticket + random;

    do { // Loop para gerar outro protocolo
    printf("********************\n");
    printf("Gerador de Protocolo\n");
    printf("********************\n");

    printf("Informe seu usuário: \n");
    gets(user);
    fflush(stdin);
    
    printf("Informe sua senha: \n");
    scanf(password);
    fflush(stdin);

     if(strcmp(user, valid_user) == 0 || strcmp(password, valid_password) == 0) // Valida se o usuário e a senha estão corretos
     {
          printf("Login bem sucedido!\n");
     }
     else
     {
     printf("Login ou senha incorretos tente novamente!\n");
     return 0;
     }

    printf("Gerando nova solicitação de protocolo...\n");
    printf("Informe o objetivo da solicitação do protocolo: \n");
    gets(message);
    fflush(stdin);

    for (i = 0; i < 5; i++) { // Efeito de carregamento
    printf(".");
    fflush(stdout); // Limpa o buffer de saída para imprimir na tela imediatamente
    sleep(1);
    }

    printf("\n%i | %s \n", ticket , message);
    printf("Sessão finalizada protocolo gerado com sucesso! \n");
    printf("Deseja solicitar outro protocolo! (Digite 1 para SIM e 0 para NÃO!) \n");
    scanf("%i", &repeat);
    fflush(stdin);
    }
    while (repeat == 1);

    system("pause \n");
    return 0;
}