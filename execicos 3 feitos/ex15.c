#include<stdio.h>
#include <locale.h>

/*Faz-se uma pesquisa envolvendo um grupo de 50 pessoas. Para cada uma das pessoas,
perguntou-se:
a) Candidato que votaria;
i) 1 para Luiz Inácio;
ii) 2 para Enéas Carneiro;
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

int main(){
  setlocale(LC_ALL, "Portuguese");
int i, candidato, idade,escolaridade, v1=0, v2=0, v3=0,qtidade25=0,qtidmenor25;
float salario,pv1,pv2,pv3,mediasal=0,mediasal2=0,mediasaltotal,mprimario,mgrau,msuperior,mprimariototal,mgrautotal,msuperiortotal,mescola;
for (i=1; i<=3; i++) {

    // valores de entrada pelo usuario

    printf("Digite '1' para Lula '2' para Eneas '3' para Cerra\n");
    scanf("%i", &candidato);

    switch(candidato)
    {
        case 1:
        v1= v1+1;
         //50 é 100%
        pv1= v1*100/i;

        break;

        case 2:
        v2= v2+1;
        pv2= v2*100/i;

        break;

        case 3:
        v3=v3+1;
        pv3= v3*100/i;

        break;

        default:
        printf("Operação errada\n");
      }
    //idade
    printf("Digite sua idade\n");
    scanf("%i",&idade);


    //salario
    printf("Digite seu salario\n");
    scanf(" %.2f",&salario);

    //grau de instrução
    printf("Digite sua escolaridade '1' para primário '2' para 2° grau '3' superior\n");
    scanf("%i",&escolaridade);

    switch(escolaridade) {

        case 1:
          mprimario=mprimario +1;
          mprimariototal =mprimario *100/i;
        break;

        case 2:
          mgrau= mgrau + 1;
          mgrautotal=  mgrau*100/i;
            ;
        break;

        case 3:
            msuperior= msuperior+ 1;
            msuperiortotal= msuperior*100/i;
        break;

       /* default:
        printf("Operação errada\n");*/
}
//media salario
    if(idade>25)
    {
       qtidade25= qtidade25 +1;

       mediasal=mediasal+ salario;
       mediasal*100/i;
    }

    else
       qtidmenor25= qtidmenor25 +1;

       mediasal2= mediasal+salario;
       mediasal2*100/i;
}

       mediasaltotal= mediasal - mediasal2; //media slario total

       printf("A diferença da media de salarios é:%2.f\n", mediasaltotal);
       printf("A idade média das pessoas que possuem curso superior é: %2.f", msuperiortotal );
       printf("A porcetagem do candidato 1 é: %.2f\n", pv1);
       printf("A porcetagem do candidato 2 é: %.2f\n", pv2);
       printf("A porcetagem do candidato 3 é: %.2f\n", pv3);

return 0;
}

