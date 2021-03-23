#include <stdio.h>

/*
21.	Uma empresa decidiu fazer um levantamento
em relação aos candidatos que se apresentarem
para preenchimento de vagas no seu quadro de
funcionários. Supondo que você seja o programa
dor dessa empresa, faça um programa que:
•	Leia, para cada candidato, a idade, o
sexo (M ou F) e a experiência no serviço
(S ou N). Para encerrar a entrada de dados digite zero para a idade.
Calcule e mostre:
•	O número de candidatos do sexo feminino;
•	O número de candidatos do sexo masculino;
•	A idade média dos homens que já tem experiência no serviço;
•	A percentagem dos homens com mais de 45 anos entre o total dos homens;
•	O número de mulheres com idade inferior a 35 anos e com experiência no serviço;
•	A menor idade entre as mulheres que já tem experiência no serviço.

*/

int main()
{
    int idade,c_feminino=0,c_masculino=0;
    int s_idade=0,c_M_S = 0, c_mais_45=0;
    int c_feminino_S_35 = 0,menor;
    float m_id_M_S = 0, per_mais_45 = 0;
    char sexo,servico;

    do
    {
        printf("Digite idade: ");
        scanf("%i",&idade);
        printf("Digite sexo: ");
        scanf("\n%c",&sexo);
        printf("Tem experiencia?: ");
        scanf("\n%c",&servico);
        if( sexo == 'F')
        {
            c_feminino++;
            if(servico == 'S' && idade < 35)
            {
                c_feminino_S_35++;
            }
            if(servico == 'S')
            {
                if(c_feminino == 1)
                {
                    menor = idade;
                }
                if(menor > idade)
                {
                    menor = idade;
                }
            }
        }
        if( sexo == 'M')
        {
            c_masculino++;
            if( servico == 'S')
            {
                s_idade += idade;
                c_M_S++;
            }
            if( idade > 45)
            {
                c_mais_45++;
            }
        }

    }
    while(idade != 0);
    printf("Qtd feminino: %i\n",c_feminino);
    printf("Qtd masculino: %i\n",c_masculino);
    if(c_M_S != 0)
       m_id_M_S = (float)s_idade / c_M_S;
    printf("Media das idades dos homens com experiencia: %.2f\n",m_id_M_S);
    if(c_masculino != 0)
        per_mais_45 = ((float)c_mais_45/c_masculino)*100;
    printf("Percentagem H > 45: %.2f\n", per_mais_45);
    printf("Numero de mulheres < 35 e Exp: %i\n",c_feminino_S_35);
    printf("Menor idade feminino: %i\n",menor);
    return 0;
}

