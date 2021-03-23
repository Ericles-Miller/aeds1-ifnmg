#include<stdio.h>
#include<locale.h>

/*Considerando que, para um consórcio, sabe-se o número total de prestações, a quantidade
de prestações pagas e o valor da prestação (fixa), faça um algoritmo que determine o total
pago pelo consorciado e o saldo devedor.*/

int main()
{
  float quantidadeprestacaopagas, valorprestacao,totalpago, saldodevedor;
  int totalprestacao;

  totalprestacao= 10;
  valorprestacao= 100.00;

  printf("Digite o total de prestações pagas pelo cliente:\n");
  scanf("%f",&totalpago);

  saldodevedor = (totalprestacao*valorprestacao) - (totalpago*valorprestacao);

  printf("O saldo devedor do cliente é de : %.2f\n", saldodevedor);


return 0;
}
