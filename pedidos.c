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

printf("Digite: D para domic�lio \n L local:\n");
scanf("%c",&ops);

switch (ops)
{
case  'd':
case  'D':
      printf("Nome");
break;

case 'l':
case 'L':
      // c�digo 2
break;

default: printf("Valor inv�lido!");
}
return 0;
}
