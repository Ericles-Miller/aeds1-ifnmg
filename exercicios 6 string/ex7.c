#include <stdio.h>

/*7.Escreva uma algoritmo que decida se duas strings de mesmo comprimento diferem em exatamente uma posição*/
int main()
{
  char nome[20],nome2[20];
    int i,n=0,pos[n];

    printf("Digite o nome:\n");
    scanf("\n%s",nome);
    printf("Digite o nome:\n");
    scanf("\n%s",nome2);

    for (i=0; nome[i]!='\0'; i++)
    {
      if(nome[i]!= nome2[i]);
      {   n=n+1;
          pos[i]=i;

      }
    }
    if (pos[i]>=1)
    {
      for (i=0; i<=n; i++)
       {
           printf("\nA string diferente esta nas posiçoes: %i\n",pos[i]);
       }
    }
return 0;
}
