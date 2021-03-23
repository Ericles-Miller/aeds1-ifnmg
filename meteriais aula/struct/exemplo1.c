#include <stdio.h>

struct aluno
{
    char nome[50];
    float n1,n2,n3;
    int matricula;
};

int main()
{
    struct aluno a;

    printf("Digite nome: ");
    scanf("%s",a.nome);
    printf("Digite tres notas: ");
    scanf("%f%f%f",&a.n1,&a.n2,&a.n3);
    printf("Digite matricula: ");
    scanf("%i",&a.matricula);

    printf("Nome: %s\n",a.nome);
    printf("Tres notas: %f %f %f\n",a.n1,a.n2,a.n3);
    printf("Matricula: %i",a.matricula);

    return 0;
}
