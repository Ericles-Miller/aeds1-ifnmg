#include<stdio.h>
#include<locale.h>


struct ped tips
{
    char lugar:


};

char pedidos()
{
setlocale(LC_ALL, "Portuguese");
char ops;

printf("Digite: D para domicílio \n L local:\n");
scanf("%c",&ops);

switch (ops)
{
case  'd':
case  'D':
      printf("Nome");
break;

case 'l':
case 'L':
      // código 2
break;

default: printf("Valor inválido!");
}
return 0;
}
