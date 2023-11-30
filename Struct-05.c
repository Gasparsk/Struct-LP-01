#include <stdio.h>
#include <stdlib.h>

struct info_pessoa
{
    char nome[200];
    char data[200];
    int rg;
    int cpf;
};

int main()
{

    int i;
    int q = 5;
    struct info_pessoa pessoa[q];

    for (i = 0; i < q; i++)
    {

        printf("Digite seu Nome: ");
        gets(pessoa[i].nome);
        

        printf("Digite Sua data de Nascimento: ");
        gets(pessoa[i].data);


        printf("Digite seu RG: ");
        scanf("%d", &pessoa[i].rg);

        printf("Digite seu CPF: ");
        scanf("%d", &pessoa[i].cpf);

        fflush(stdin);
       
        system("cls");
    }

    system("cls");

    for (i = 0; i < q; i++)
    {

        printf("%d Nome: %s \n", i + 1, pessoa[i].nome);

        printf("Data de Nascmenti: %s \n", pessoa[i].data);

        printf("Digite seu RG: %d \n", pessoa[i].rg);

        printf("Digite seu CPF: %d \n", pessoa[i].cpf);

        fflush(stdin);
    }

    return 0;
}