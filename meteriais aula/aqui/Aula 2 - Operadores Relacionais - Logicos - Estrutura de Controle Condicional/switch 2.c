#include <stdio.h>

int main()
{
    char sexo;
    printf("Digite sexo (m ou f): ");
    scanf("\n%c", &sexo);

    switch( sexo )
    {
    case 'f':
    case 'F':
        printf("Feminino\n");
        printf("Feminino\n");
        printf("Feminino\n");
        printf("Feminino\n");
        printf("Feminino\n");
        break;
    case 'm':
    case 'M':
        printf("Masculino\n");
        printf("Masculino\n");
        printf("Masculino\n");
        printf("Masculino\n");
        printf("Masculino\n");
        break;
    default:
        printf("opcao invalida\n");
    }

    return 0;
}

