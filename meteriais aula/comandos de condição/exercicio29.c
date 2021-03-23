#include <stdio.h>

/*
29.	Faça um algoritmo que, dada a idade
de um nadador, classifique-o em uma das
seguintes categorias:
•	Infantil A: 5 - 7 anos
•	Infantil B: 8 - 10 anos
•	Juvenil A: 11 - 13 anos
•	Juvenil B: 14 - 17 anos
•	Adulto:18 - 60 anos
•	Sênior: Acima de 60 anos.
*/

int main()
{
    int idade;
    printf("Digite idade do nadador: ");
    scanf("%i",&idade);

    if(idade >= 5 && idade <= 7)
    {
      printf("Infantil A\n");
    }
    else
    if(idade >= 8 && idade <= 10)
    {
        printf("Infantil B\n");
    }
    else
    if( idade >= 11 && idade <= 13)
    {
        printf("Juvenil A\n");
    }
    else
    if( idade >= 14 && idade <= 17)
    {
        printf("Juvenil B\n");
    }
    else
    if( idade >= 18 && idade <= 60)
    {
        printf("Adulto\n");
    }
    else
    if( idade > 60)
    {
        printf("Senior\n");
    }
    return 0;
}


