#include<stdio.h>
#include<locale.h>


int main()
{
setlocale(LC_ALL, "Portuguese");
int ops;

printf("Digite:\n 1 para cliente \n 2 para ingrdiente \n 3 para lista de clientes \n 4 para lista de ingredientes \n 5 fazer pedido:\n");
scanf("%i", &ops);

switch (ops)
{
case  1:
      printf("Nome");
break;

case  2:
      // c�digo 2
break;

case 3:

break;

case 4:
      // c�digo 1
break;

case 5:
      // c�digo 2
break;

default: printf("Valor inv�lido!");

}


return 0;
}
