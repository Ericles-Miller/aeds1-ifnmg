#include <stdio.h>
/*
10.	Para uma turma de 62 alunos, construir um
algoritmo que determine:
•	Idade media dos alunos com altura menor
    que 1.70;
•	A altura media dos alunos com mais de vinte
    anos.
*/
int main()
{
    int a,idade,s_idade = 0,c_idade = 0,c_altura=0;
    float altura,m_idade=0,s_altura =0,m_altura=0;
    for(a = 1; a <= 48; a++)
    {
       printf("Digite idade e altura: ");
       scanf("%i%f",&idade,&altura);
       if( altura < 1.7)
       {
           s_idade = s_idade + idade;
           c_idade++;/*c_idade+=1; c_idada=c_idade+1;*/
       }
       if( idade > 20)
       {
           s_altura = s_altura + altura;
            c_altura = c_altura + 1;
       }
    }
    if(c_idade > 0)
    {
        m_idade = (float)s_idade / c_idade;
    }
    printf("Media das idades: %.2f\n",m_idade);

    if(c_altura > 0)
    {
        m_altura = s_altura / c_altura;
    }
    printf("Media das alturas: %.2f\n",m_altura);

    return 0;
}




