#include <stdio.h>


/*
Entrar com o numero da conta e saldo de varias pessoas. Imprimir todas as contas,
os respectivos saldos e uma das mensagens: positivo/negativo. Ao final, o
percentaul de pessoas com  saldo negativo. O algoritmo acaba quando se digitar
um numero negativo para a conta.
*/

int main()
{
    int conta,c_negativos=0, c_geral=0;
    float saldo,perc_negativos;
    do
    {
        printf("Digite numero da conta: ");
        scanf("%i",&conta);

        if( conta >= 0)
        {
            printf("Digite saldo: ");
            scanf("%f",&saldo);

            if( saldo < 0 )
            {
                printf("Conta: %i Saldo: %.2f Negativo\n",
                       conta,saldo);
                c_negativos++;
            }
            else
            {
               printf("Conta: %i Saldo: %.2f Positivo\n",
                      conta,saldo);
            }
            c_geral++;
        }
    }
    while( conta >= 0);
  perc_negativos =  (float)c_negativos/c_geral *100;
  printf("Percentual de saldos negativos: %.2f\n",
         perc_negativos);

    return 0;
}
