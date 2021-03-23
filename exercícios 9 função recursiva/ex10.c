#include<stdio.h>

/*Faça uma função recursiva, em linguagem C, que calcule o valor da série
descrita a seguir para um valor n > -2 a ser fornecido como parâmetro para a
mesma.*/


int trem_doido (int a)
{

    if (a<-2)
    {
        return;
    }

    else
    {
        return a* trem_doido(a+1/a+3);
    }
}


int main()
{
    int n;

    printf("Digite um numero:");
    scanf("%i",&n);

    //fat_duplo(n);

    printf("O resultado e: %i", trem_doido(n));

    return 0;
}
