#include <stdio.h>
#include <stdlib.h>

struct info_pessoa
{
    char nome[200];
    int idade;
    char endereco[200];
};

int main()
{

    struct info_pessoa pessoa;

    printf("Digite seu Nome: ");
    gets(pessoa.nome);

    printf("Digite sua idade: ");
    scanf("%d", &pessoa.idade);

    fflush(stdin);

    printf("Digite seu endereco: ");
    gets(pessoa.endereco);

    system("cls");

    printf("Nome: %s \n", pessoa.nome);

    printf("Idade: %d \n", pessoa.idade);

    printf("Endereco: %s \n", pessoa.endereco);

    return 0;
}