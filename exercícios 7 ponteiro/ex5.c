#include<stdio.h>
#include<stdlib.h>

/*5.Analise o c�digo abaixo e determine o valor das vari�veis ao final da execu��o*/

int main()
{
  int i=34,j;
int *p;
p = &i;
 *p++;
j = (*p) + 33;
printf("%i",j);
return 0;
}

