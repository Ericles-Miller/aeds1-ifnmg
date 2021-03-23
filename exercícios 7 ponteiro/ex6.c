#include<stdio.h>
#include<stdlib.h>

/*5.Analise o código abaixo e determine o valor das variáveis ao final da execução*/

int main()
{
int i=7, j=5,c;
int *p;
int **q;
p = &i;
q = &p;
c = **q + j;
printf("%i",c);
return 0;
}
