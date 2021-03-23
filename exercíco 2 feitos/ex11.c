#include<stdio.h>

/*Faça um algoritmo que leia três números(X, Y e Z). O programa deve resolver as
seguintes situações:
 Se X for maior que Y ou se Z for menor ou igual a 30, multiplique X por 2. Caso
contrário, divida X por 2 e divida Z por 5.*/

int main ()
{
int x,y,z;

printf("Digite um número:\n");
    scanf("%i", &x);
    printf("Digite um número:\n");
    scanf("%i", &y);
    printf("Digite um número:\n");
    scanf("%i", &z);

    if (x>y || z>=30) {
        x= x.2 ;
    }
    else if (x <y || z<30) {
        x=x/2;
        z=z/5;
    }

retorn 0;
}
