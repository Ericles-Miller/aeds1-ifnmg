#include<stdio.h>
#include<locale.h>

/*Considerando que, para um cons�rcio, sabe-se o n�mero total de presta��es, a quantidade
de presta��es pagas e o valor da presta��o (fixa), fa�a um algoritmo que determine o total
pago pelo consorciado e o saldo devedor.*/

int main()
{
  float quantidadeprestacaopagas, valorprestacao,totalpago, saldodevedor;
  int totalprestacao;

  totalprestacao= 10;
  valorprestacao= 100.00;

  printf("Digite o total de presta��es pagas pelo cliente:\n");
  scanf("%f",&totalpago);

  saldodevedor = (totalprestacao*valorprestacao) - (totalpago*valorprestacao);

  printf("O saldo devedor do cliente � de : %.2f\n", saldodevedor);


return 0;
}
