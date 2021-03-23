#include<stdio.h>

/*21. Uma empresa decidiu fazer um levantamento em relação aos candidatos que se
apresentarem para preenchimento de vagas no seu quadro de funcionários. Supondo que
você seja o programador dessa empresa, faça um programa que:
 Leia, para cada candidato, a idade, o sexo (M ou F) e a experiência no serviço (S ou
N). Para encerrar a entrada de dados digite zero para a idade.
Calcule e mostre:
 O número de candidatos do sexo feminino; *****
 O número de candidatos do sexo masculino;*****
 A idade média dos homens que já tem experiência no serviço;******
 A percentagem dos homens com mais de 45 anos entre o total dos homens;*******
 O número de mulheres com idade inferior a 35 anos e com experiência no serviço;****
 A menor idade entre as mulheres que já tem experiência no serviço.*/

int main(){
int idade, contm=0,contf=0,expF=0,expM=0,idM=0,idF=0,contid35=0,menorid;
char sexo, xp;
float mediaexpM,mediaid45;

    do
    {
        printf("Digite sua idade: ");
        scanf("%i",&idade);

        printf("Digite o seu sexo 'm' masculino 'f' feminino\n");
        scanf(" %c",&sexo);

        printf("Possui experiencia no serviço\n");
        scanf(" %c",&xp);

switch(sexo) {

    case 'm':

        contm+= +1;//contador masculino
        if (idade>45)
        {
        idM+= +1;
        }
    break;

    case 'f':

        contf+= +1;//contador masculino
    break;

    default: printf("Operação errada!");
}

switch (xp){

    case 's':
        expM+= +1;//contador exper. mascul.
    break;

    case 'n':
        expF+= +1;//contador exper. femin.
    break;
}
    if (sexo == 'f' && idade<35 && xp == 's' )
{
        contid35+= +1;//contador id xp do sexo femin
        menorid=35;
    if (idade<menorid)
    {
        menorid= idade;//verific. de menor id

    }
}

}while(idade == 0);


    mediaexpM = expM *100/ contm;//media ex masc

    mediaid45= idM *100/contm;//media masc acima 45 id

 //   mediaexpF = expF *100/ contf;

//*************mostrar os dados*****************

    printf("A media de experiencia dos homens: %f", mediaexpM);
    printf("A media dos homens com mais de 45 anos: %f", mediaid45);
    printf("O numero de mulheres com idade abaixo de 35 com experiencia %i", contid35);

return 0;
}
