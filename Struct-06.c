#include <stdio.h>
#include <stdlib.h>

struct dados_nota
{
    char nome[200];
    int idade;
    float notas[2];
};

int main()
{

    int i, j;
    int q = 3;
    int soma = 0;
    float media[2];
    struct dados_nota nota[q];

    for (i = 0; i < q; i++)
    {
        printf("Digite seu Nome: ");
        gets(nota[i].nome);

        printf("Digite sua idade: ");
        scanf("%d", &nota[i].idade);

        for (j = 0; j < 2; j++)
        {
            printf("%d Nota: ", j + 1);
            scanf("%f", &nota[i].notas[j]);

            soma = soma + nota[i].notas[j];
        }

        media[i] = soma / j;
        soma = 0;

        fflush(stdin);

        system("cls");
    }

    for (i = 0; i < q; i++)
    {
        printf("Nome: %s \n", nota[i].nome);

        printf("idade: %d \n", nota[i].idade);
        printf("-------------------------\n");

        for (j = 0; j < 2; j++)
        {
            printf("%d Nota: %.2f \n", j + 1, nota[i].notas[j]);
        }

        fflush(stdin);

        printf("Media: %.2f \n", media[i]);

        printf("-------------------------\n");
    }
    return 0;
}