#include<stdio.h>
#define tam 5
#define aiai 5
#include<locale.h>

/*17.Construa um algoritmo que leia um vetor G[5] (gabarito) e a seguir leia matricula e um vetor R[5],
que seriam as respostas dos alunos para as quest�es (turma possui 30 alunos),
da letra A at� a letra E, sendo que deve ser lido a matricula do aluno e um vetor de respostas por vez.
Para cada aluno, mostre o n�mero de acertos e a sua nota,
sendo que todas as quest�es tem o mesmo peso. E ao final a m�dia da turma*/

int main()
{
setlocale(LC_ALL, "Portuguese");

   int i,matricula[30],certo=0,certos_t=0,j;
    char gab[tam], r[tam];
    float media;
   for (i=0; i<tam; i++)
    {
        printf("Digite o gabarito :\n");
        scanf(" %c",&gab[i]);
    }

    for (i=0; i<=aiai; i++)
    {
        printf("Digite o numero da sua matr�cula:\n");
        scanf("%i",&matricula[i]);

        for(j=0; j<tam; j++)
        {
            printf("Digite a primeira nota:");
            scanf("\n%c", &r[i]);
        }
        for(i=0; i<tam; i++)
        {
            if (r[i]==gab[i])
            {
                certo=certo +1;
            }
        }
        printf("Sua nota foi: %i e seu n�mero de acertos foi:%i", certo,certo);
        certos_t = certo + certos_t;
    }

    media=certos_t/ 5*aiai;

     printf("A media foi de %f", media);


return 0 ;
}
