 /*15. Faz-se uma pesquisa envolvendo um grupo de 50 pessoas. Para cada uma das pessoas,
perguntou-se:
a) Candidato que votaria;
i) 1 para Luiz Inácio;
ii) 2 para Enéas Carneiro;
iii) 3 para José Serra.
b) Idade;
c) Salário;
d) Grau de instrução:
i) 1para Primário;
ii) 2 para 2º Grau;
iii) 3 para Superior.
Considerando essas informações, faça um algoritmo que forneça:
 A diferença entre a média dos salários das pessoas com mais de 25 anos e a média
daquelas com menos de 25 anos;
 A idade média das pessoas com nível superior.
 Exibir a porcentagem de votos de cada candidato.*/

#include <stdio.h>
#define tam 5
#include<stdlib.h>
int main()
{
int i,n,candidato,cd1=0,cd2=0,cd3=0,idade,esc,med_super,id25,id;
float salario,salario_total,sal25,sal,sal_dif,idmed,p_cand1,p_cand2,p_cand3;


for (i=1; i<tam; i++)
{
    printf("Digite o canditado:");
    scanf("%i",&candidato);

    switch(candidato)
    {
    case 1:
        cd1=cd1+1;
    break;

    case 2:
        cd2=cd2+1;
    break;

    case 3:
        cd3=cd3 +1;
    break;
    default: printf("Errado");

    }

    printf("Idade:\n");
    scanf("%i",&idade);
    printf("Salario\n");
    scanf("%.2f",&salario);
    setbuf(stdin,NULL);
    printf("escolaridade\n");
    scanf(" %i",&esc);

switch(esc)
{
case 3:
    med_super= med_super +1;
break;
}

if (idade> 25)
    {
        sal25=sal25 +salario;
    }
else
    sal= sal+ salario;
}
 //termina o for

    salario_total= salario+salario_total;

    sal25=sal25*100/salario_total;//sal25

    sal=sal*100/salario_total;//sal-25

    sal_dif= sal- sal25;//dif de porc de sal

    idmed= (float)id *100/tam;//id superior

    p_cand1= cd1*100/tam;//por candidato
    p_cand2= cd2*100/tam;
    p_cand3= cd3*100/tam;


    //imprimor

    printf("A diferença de media:%f\n",sal_dif);
    printf("A idade media:%f", idmed);
    printf("A porceta. dos candidato 1 %f do 2 %f do 3 %f",p_cand1, p_cand2, p_cand3);



return 0;
}
















