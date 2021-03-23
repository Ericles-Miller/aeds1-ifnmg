#include<stdio.h>

/*Construa um algoritmo que leia dois números reais e a operação aritmética desejada (use um char para armazenar a
operação). Calcule então a resposta adequada. Sendo a operação ‘+’ uma soma, ‘*’ multiplicar os dois números, ‘/’ dividir
o primeiro pelo segundo, ‘-‘ subtração do primeiro pelo segundo (utilize o comando switch).*/

int main(){

char opera;
float n1,n2, resultado;

    printf("Digite o primeiro número:\n");
    scanf(" %f", &n1);
    // parte de verificação do switc
    printf("Digite a operação '*' multiplicação '/' divisão '+' adição '-' subtração\n");
    scanf(" %c", &opera);

switch (opera) {
    case '+' :
        printf("Digite o segundo número:\n");
        scanf(" %f",&n2);
        resultado = n1+ n2;
        printf("O resultado é: %f\n", resultado);
break;

case '-' :
        printf("Digite o segundo número:\n");
        scanf(" %f",&n2);
        resultado = n1- n2;
        printf("O resultado é: %f\n", resultado);
break;

case '*' :
        printf("Digite o segundo número:\n");
        scanf(" %f",&n2);
        resultado = n1* n2;
        printf("O resultado é: %f\n", resultado);
break;

case '/' :
        printf("Digite o segundo número:\n");
        scanf(" %f",&n2);
        if (n2 == 0)
        {
        printf("Não existe divisão feita por zero.");
        }
        else
        resultado = n1/ n2;
        printf("O resultado é: %f\n", resultado);
break;

}

return 0;
}
