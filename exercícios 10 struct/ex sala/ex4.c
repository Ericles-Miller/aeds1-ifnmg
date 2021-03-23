#include<stdio.h>
#include<stdlib.h>
typedef struct dados energia;
 struct dados
{
    char nome[15];
    float pot;
    float ativo;
};
void ler_dados(energia *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
    printf("Digite nome do eletrdomestico, no max 15 letras:");
    scanf("%s",(a+i)->nome);
    printf("Digite potencia,kw:");
    scanf("%f",&(a+i)->pot);
    printf("Digite tempo ativo,horas:");
    scanf("%f",&(a+i)->ativo);
    }

}
void consumo(energia *a, int n,int t)
{
    int i;
    float c=0,relativo[n],p;
    for(i=0;i<n;i++)
    {
       relativo[i]=((a+i)->pot)*((a+i)->ativo);
       c+=relativo[i];
    }
    for(i=0;i<n;i++)
    {
        p=100*relativo[i]/c;
        printf("Consumo de %s = %.2fkw Porcentagem = %.2f\n",(a+i)->nome,relativo[i],p);
    }
    c*=t;
    printf("Consumo total de %i eletrodomestico(s) em %i dias = %.2fkw\n",a,t,c);
}

int main()
{
  energia *b;
    int n,tempo;
    printf("Digite quantidade de eletrodomesticos:");
    scanf("%i",&n);
    b=(energia*)malloc(sizeof(energia)*n);
    ler_dados(b,n);
     printf("Digite quantidade de dias que deseja saber consumo:");
    scanf("%i",&tempo);
    consumo(b,n,tempo);
    free(b);
    return 0;
}
