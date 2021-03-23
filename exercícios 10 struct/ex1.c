#include<stdio.h>

struct dados
{
    int num;
    char rua[50];
    char nome[50];

};

int main()
{
    struct dados a;

    printf("Digite o numero da casa:");
    scanf("%i",&a.num);
    printf("Digite o nome da rua:");
    scanf(" %s",a.rua);
    printf("Digite o seu nome:");
    scanf("%s", a.nome);

    printf("O numero da casa: %i\n", a.num);
    printf("o nome da rua:%s\n", a.rua);
    printf("O nome é:%s \n", a.nome);

return 0;
    }
