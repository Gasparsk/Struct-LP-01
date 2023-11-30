#include <stdio.h>
#include <stdlib.h>

struct info_pessoa
{
    char nome[200];
    int idade;
    float peso;
    float altura;
};

int main()
{

    struct info_pessoa pessoa;

    printf("Digite seu Nome: ");
    gets(pessoa.nome);

    printf("Digite sua Idade: ");
    scanf("%d", &pessoa.idade);

    printf("Digite seu Peso: ");
    scanf("%f", &pessoa.peso);

    printf("Digite sua Altura: ");
    scanf("%f", &pessoa.altura);

    system("cls");

    printf("Nome: %s \n", pessoa.nome);
    printf("-----------------\n");

    printf("Idade: %d \n", pessoa.idade);
    printf("-----------------\n");

    printf("Peso: %.2f \n", pessoa.peso);
    printf("-----------------\n");

    printf("Altura: %.2f \n", pessoa.altura);
    printf("-----------------\n");

    return 0;
}