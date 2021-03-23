
#ifndef ALUNO_H
#define ALUNO_H

typedef struct aluno TAluno;
struct aluno
{
    char nome[30];
    int matricula;
    float media;
};

void ler_aluno(TAluno *al);
void imprimir_aluno(TAluno *al);
void alterar_aluno(TAluno *al);
void gravar_aluno(TAluno *al);
TAluno * encontrar_aluno( int matricula);
void listar_alunos( );
void gravar_media(TAluno *al);


#endif // ALUNO_H
