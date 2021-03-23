#include<stdio.h>

/*Construa um algoritmo que para grupo de cinquenta valores inteiros, determine:
 A soma dos valores positivos.
 A quantidade de valores negativos.*/

int main()
{
int i ,n1,soma=0, vlnegativo=0;

for (i=1; i<=3; i++)
    {

    printf("Digite um valor:\n") ;
    scanf("%i",&n1);

    if (n1> 0) {
    soma= soma +n1;


    }

    else if (n1 <0) {

    vlnegativo = vlnegativo +1;

    }
    else printf ("o valor é zero!");

}
     printf("A soma dos valores positivos sao: %i\n" , soma);
     printf("A soma dos valores negativos e: %i\n", vlnegativo);

return 0;
}
