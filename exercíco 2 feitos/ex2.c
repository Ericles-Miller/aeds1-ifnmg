#include <stdio.h>
/*Faça um algoritmo que peça para o usuário digitar seu sexo: f para feminino e m para
masculino. Imprima “Feminino” quando digitado f ou “Masculino” quando digitado m.*/

int main() {

  char sexo;

    printf("digite M para masculino e F feminino:\n");
    scanf("%c",&sexo);

    switch (sexo) {

    case 'f':
    case 'F':
        printf("Feminino\n");
    break;
    case 'm':
    case 'M':
        printf("Masculino\n");
    break;



    }



 return 0;
}
