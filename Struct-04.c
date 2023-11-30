#include <stdio.h>
#include <stdlib.h>

struct livro_dados
{
    float preco;
    char nome[200];
    char autor[200];
    char categoria[200];
};

int main()
{
    int i;
    int q = 3;
    struct livro_dados dados[q];

    for (i = 0; i < q; i++)
    {
        printf("Digite o nome do Livro: ");
        gets(dados[i].nome);

        printf("Digite o autor: ");
        gets(dados[i].autor);

        printf("Digite a categoria: ");
        gets(dados[i].categoria);

        printf("Quanto custa: ");
        scanf("%f", &dados[i].preco);

        fflush(stdin);

        system("cls");
    }

    system("cls");

    printf("-------------------------\n");

    for (i = 0; i < q; i++)
    {
        printf("Digite o nome do Livro: %s \n", dados[i].nome);
        printf("-------------------------\n");

        printf("Digite o autor: %s \n", dados[i].autor);
        printf("-------------------------\n");

        printf("Digite a categoria: %s \n", dados[i].categoria);
        printf("-------------------------\n");

        printf("Quanto custa: %.2f \n", dados[i].preco);
        printf("-------------------------\n");

        fflush(stdin);
    }

    return 0;
}