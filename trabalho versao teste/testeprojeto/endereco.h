#ifndef ENDERECO
#define ENDERECO

typedef struct local endereco;
struct local
{
    char bairro[100];
    char rua [100];
    int n;
};
     void ler_endereco();
     void imprimir_endereco();

#endif
