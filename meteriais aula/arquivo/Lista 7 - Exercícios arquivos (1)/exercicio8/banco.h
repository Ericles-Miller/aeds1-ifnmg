
#ifndef BANCO_H
#define BANCO_H

typedef struct banco TBanco;
struct banco
{
    int codigo;
    char cliente[50];
    float saldo;
};

void ler_banco( TBanco *b);
void imprimir_banco( TBanco *b);
void gravar_banco( TBanco *b);
TBanco* buscar_banco( int codigo);
void atualizar_conta_banco( TBanco *b);
void listar_banco();

#endif // BANCO_H










