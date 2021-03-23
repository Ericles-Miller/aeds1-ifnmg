#include<stdio.h>
#include<stdlib.h>

/*3. Faça um algoritmo para ler os dados de 200 alunos e em seguida exibi-los.
Os dados são nome, quantidade de faltas, 5 notas avaliativas e uma
indicação se é bolsista ou não.*/


typedef struct cadastro C;

struct cadastro
{
    char nome[30];
    int faltas;
    float n1,n2,n3,n4,n5;
    char bolsa[1];

};

void ler_cadastro( C *cad)
{
    printf("Digite o seu nome:\n");
    scanf("%s",cad->nome);
    printf("Digite seu numero de faltas:\n");
    scanf("%i",&cad->faltas);
    printf("digite 5 notas:\n");
    scanf("%f%f%f%f%f",&cad->n1,&cad->n2,&cad->n3,&cad->n4,&cad->n5);
    printf("digite se e bolsista:\n");
    scanf("%s",cad->bolsa);



}

void imprmir(C *cad )
{   //struct cadastro cad;

    printf(" seu nome:%s\n",cad->nome);
    printf("Seu numero de faltas é:%i\n",cad->faltas);
    printf("Suas notas sao: %f %f %f %f %f\n", cad->n1,cad->n2,cad->n3,cad->n4,cad->n5);
    printf("bolsita:%s\n",cad->bolsa);

}


int main()
{
C dados[0];
int i;

    for(i=0; i<1; i++)
    {
        ler_cadastro(&dados[i]);
    }

    for(i=0; i<1; i++)
    {
        imprmir(&dados[i]);
    }



return 0;

}
