#include<stdio.h>

/*Construa um algoritmo que leia dois n�meros reais e a opera��o aritm�tica desejada (use um char para armazenar a
opera��o). Calcule ent�o a resposta adequada. Sendo a opera��o �+� uma soma, �*� multiplicar os dois n�meros, �/� dividir
o primeiro pelo segundo, �-� subtra��o do primeiro pelo segundo (utilize o comando switch).*/

int main(){

char opera;
float n1,n2, resultado;

    printf("Digite o primeiro n�mero:\n");
    scanf(" %f", &n1);
    // parte de verifica��o do switc
    printf("Digite a opera��o '*' multiplica��o '/' divis�o '+' adi��o '-' subtra��o\n");
    scanf(" %c", &opera);

switch (opera) {
    case '+' :
        printf("Digite o segundo n�mero:\n");
        scanf(" %f",&n2);
        resultado = n1+ n2;
        printf("O resultado �: %f\n", resultado);
break;

case '-' :
        printf("Digite o segundo n�mero:\n");
        scanf(" %f",&n2);
        resultado = n1- n2;
        printf("O resultado �: %f\n", resultado);
break;

case '*' :
        printf("Digite o segundo n�mero:\n");
        scanf(" %f",&n2);
        resultado = n1* n2;
        printf("O resultado �: %f\n", resultado);
break;

case '/' :
        printf("Digite o segundo n�mero:\n");
        scanf(" %f",&n2);
        if (n2 == 0)
        {
        printf("N�o existe divis�o feita por zero.");
        }
        else
        resultado = n1/ n2;
        printf("O resultado �: %f\n", resultado);
break;

}

return 0;
}
