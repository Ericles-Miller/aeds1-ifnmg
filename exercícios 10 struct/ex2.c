#include<stdio.h>
#include<stdlib.h>

/*2. Declare uma estrutura (struct) capaz de criar variáveis para armazenar os
seguintes dados de funcionário:
 nome com no máximo 30 caracteres,
 código de matrícula com exatamente 8 caracteres,
 código do seu cargo profissional com exatamente 2 caracteres,
 número de dependentes,
 salário.*/


typedef struct cadastro C;

struct cadastro
{
    char nome[30];
    char matricula[8];
    char cargo[2];
    int depede;
    float salario;
};

void ler_cadastro( C *cad)
{
    printf("Digite o seu nome:\n");
    scanf("%s",cad->nome);
    printf("Digite seu numero de matricula:\n");
    scanf("%s", cad->matricula);
    printf("digite seu cargo:\n");
    scanf("%s",cad->cargo);
    printf("digite o numero seus dependentes:\n");
    scanf("%i",&cad->depede);
    printf("Digite seu salario:\n");
    scanf("%f",&cad->salario);
}

void imprmir(C *cad )
{   //struct cadastro cad;

    printf(" seu nome:%s\n",cad->nome);
    printf("Seu numero de matricula é:%s\n",cad->matricula);
    printf("Seu cargo é: %s\n", cad->cargo);
    printf("O numero de dependentes:%i\n",cad->depede);
    printf("Salario:%f\n",cad->salario);
}


int main()
{
C dados[0];
int i;

    for(i=0; i<4; i++)
    {
        ler_cadastro(&dados[i]);
    }

    for(i=0; i<4; i++)
    {
        imprmir(&dados[i]);
    }



return 0;

}
