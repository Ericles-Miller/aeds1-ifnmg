#include <stdio.h>

int main()
{
    char sexo;
    printf("Digite sexo (m ou f): ");
    scanf("%c", &sexo);

    switch( sexo )
    {
    case 'f':
        printf("Feminino\n");
        break;
    case 'm':
        printf("Masculino\n");
    }




    return 0;
}

