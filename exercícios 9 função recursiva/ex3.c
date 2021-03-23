#include<stdio.h>
#include<stdlib.h>

/*3. Faça uma função recursiva chama potencia() que aceite dois argumentos
inteiros positivos i e j. A função retorna i elevado a potência j. Por exemplo:
potencia(2,3) é igual a 8.*/



int potencia(int i, int j)
{
    if (j==0)
    {
        return 1;
    }

    else
    {
        return i* potencia(i,j-1);
    }
}

int main()
{
    int i,j,f;

    printf ("Digite um numero:");
    scanf("%i%i",&i,&j);
    f=potencia(i,j);

    printf("A soma foi de:%i", potencia(i,j));

return 0;

}
