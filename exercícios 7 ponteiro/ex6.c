#include<stdio.h>
#include<stdlib.h>

/*5.Analise o c�digo abaixo e determine o valor das vari�veis ao final da execu��o*/

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
