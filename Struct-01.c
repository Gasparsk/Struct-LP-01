#include <stdio.h>
#include <stdlib.h>

struct dados_aluno
{
    char nome[200];
    int idade;
};

int main()
{

    struct dados_aluno aluno;

    printf("Digite o nome do aluno: ");
    gets(aluno.nome);

    printf("Digite a idade do aluno: ");
    scanf("%d", &aluno.idade);

    printf("Nome: %s \n", aluno.nome);

    printf("Idade: %d \n", aluno.idade);

    return 0;
}