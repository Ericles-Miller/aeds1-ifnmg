#include <stdio.h>
#include <stdlib.h>
#include "aluno.h"

int main()
{
    int opcao,mat;
    TAluno *a;

    do
    {
        printf("1 - Cadastrar aluno.\n");
        printf("2 - Listar alunos.\n");
        printf("3 - Exibir aluno.\n");
        printf("4 - Alterar media.\n");
        printf("0 - Sair.\n");
        printf("Opcao: \n");
        scanf("%i",&opcao);
        switch(opcao)
        {
        case 1:
            a = (TAluno*) malloc(sizeof(TAluno));
            ler_aluno(a);
            gravar_aluno(a);
            free(a);
            break;
        case 2:
            listar_alunos();
            break;
        case 3:
            printf("Digite matricula: ");
            scanf("%i",&mat);
            a = encontrar_aluno(mat);
            if( a != NULL )
            {
              imprimir_aluno(a);
            }
            else
            {
                printf("\nAluno nao encontrado!!!!\n\n");
            }
            break;
        case 4:
            printf("Digite matricula: ");
            scanf("%i",&mat);
            a = encontrar_aluno(mat);
            if( a != NULL )
            {
              alterar_aluno(a);
              gravar_media(a);
              free(a);
            }
            else
            {
                printf("\nAluno nao encontrado!!!!\n\n");
            }
            break;
        }
    }while(opcao > 0 && opcao <=4 );

    return 0;
}
