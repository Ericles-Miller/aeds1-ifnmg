#include <stdio.h>
/*
37.	Faz-se uma pesquisa envolvendo um grupo de pessoas. Para cada uma das pessoas, perguntou-se:
a)	Valor do seu salário;
b)	Idade;
c)	Grau de instrução:
i)	1 para Primário;
ii)	2 para 2º Grau;
iii)	3 para Superior.
Considerando essas informações, faça um algoritmo que forneça:
•	Número de pessoas que possuem curso superior e ganham menos que R$500,00;
•	A diferença entre a média dos salários das pessoas com mais de 25 anos e a média daquelas com menos de 25 anos;
•	O percentual de pessoas que possuem o curso Primário com relação as que tem curso Superior;
•	A idade média das pessoas com nível superior e quantas estão acima dessa média.
*/

int main()
{
    int N,grau,i,c_s_me500=0,c_sup=0,c_prim=0;
    float salario,diferenca,percentual,m_id_sup;
    float smais25=0, mmais25,smenos25=0, mmenos25;
    int cmais25=0,cmenos25=0,s_id_sup=0,c_maior_media=0;
    printf("Digite quantidade de pessoas: ");
    scanf("%i",&N);
    int idades[N];
    for(i=0; i< N;i++)
    {
        printf("Digite salario-grau-idade:");
        scanf("%f%i%i",&salario,&grau,&idades[i]);
        if( grau == 3 && salario < 500.00)
        {
            c_s_me500++;
        }

        if( idades[i] > 25)
        {
          smais25+=idades[i];
          cmais25++;
        }
        if( idades[i] < 25)
        {
          smenos25+=idades[i];
          cmenos25++;
        }

        if( grau == 1)
        {
            c_prim++;
        }
        if( grau == 3)
        {
            c_sup++;
            s_id_sup+=idades[i];
        }
    }
    mmais25 = (float)smais25 / cmais25;
    mmenos25 = (float)smenos25 / cmenos25;
    diferenca = mmais25 - mmenos25;
    m_id_sup = (float)s_id_sup / c_sup;

    for(i= 0; i< N;i++)
    {
        if( idades[i] > m_id_sup )
        {
            c_maior_media++;
        }
    }

    percentual = (float)c_prim / c_sup *100;
    printf("Pessoas com Sup e sal < 500.00: %i\n", c_s_me500);
    printf("Diferenca: %.2f\n",diferenca);
    printf("Percentual: %.2f\n",percentual);
    printf("Quantidade de pessoas acima da idade media: %i\n",c_maior_media);

    return 0;
}


