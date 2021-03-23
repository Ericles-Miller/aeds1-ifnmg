
#include<stdio.h>
#include<stdlib.h>

/*Faça um algoritmo que controla o consumo de energia dos eletrodomésticos
de uma casa. Leia um inteiro n e:
a. Crie e leia n eletrodomésticos que contém nome (máximo 15 letras),
potencia (real, em kw) e tempo ativo por dia (real, em horas).
b. Leia um tempo t (em dias), calcule e mostre o consumo total na casa e o
consumo relativo de cada eletrodomésticos (consumo/consumo total)
nesse período de tempo. Apresente este último dado em porcentagem.*/


typedef struct dados casa;
struct dados
{
    int n;
    char nome[15];
    float potencia;
    float tempo;
};

void ler_casa( casa *a,int n)
{
    int i;
    for (i=0;i<n;i++)
{
     printf("NOme"):
    scanf("%s",(a+1)->nome[n]);

    scanf("%f",&(a+1)->potencia[n]);
    scanf("%f",&(a+1)->tempo[n]);
}

}
void consumo(int t,int n,casa *a)

{
    float consumoT[n];
      for (i=0;i<n;i++)
{
    consumoT[i]= t*((a+1)->tempo) * ((a+i)->potencia);
}


int main()
{
int n,t;
 casa *p;
printf("Digite um valor");
scanf("%i",&n);
printf("\nTempo:");
scanf("%i",&t);

p=(casa*)malloc(sizeof(casa)n*);

ler_casa(p,n);
consumo(t,n,p);

return 0;
}
