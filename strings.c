#include <stdio.h>
#include <string.h>

int main(){


char nome[50];
char senha[20];

printf("Digite seu numero: ");
fgets(nome, 50, stdin);
nome[strcspn(senha, "\n")] = '\0';

 printf("Digite sua senha: ");
 fgets(senha, 20, stdin);
 senha[strcspn(senha, "\n")] = '\0';

 printf("Seu nome: ", nome);
 printf("Sua senha: ", senha);





}