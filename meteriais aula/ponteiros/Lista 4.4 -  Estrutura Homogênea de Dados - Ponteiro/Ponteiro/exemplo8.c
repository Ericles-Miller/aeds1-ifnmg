#include <stdio.h>
#include <stdlib.h>

#define N 10
int main()
{
    char c, *pc, *nome;
    nome = (char*) malloc(sizeof(char) * N);
    printf("Digite um nome: ");
    scanf("%s", nome);
    printf("Digite um caractere: \n");
    /* scanf("\n%c",pc); erro de endereco */
    c = '@';
    pc = &c;
    printf("%c\n", *nome );
    pc = nome + 4;
    printf("%c\n", *pc);
    printf("%c\n", *(pc+3));
    *pc = 'A';
    *(pc + 4) = 'B';
    printf("Nome: %s\n", nome);





    return 0;
}
