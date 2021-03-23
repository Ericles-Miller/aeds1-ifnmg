#include <stdio.h>
#include <stdlib.h>

/*
O padrão C ANSI define um conjunto completo
de funções de E/S que pode ser utilizado para
ler e escrever qualquer tipo de dado.

O sistema de E/S de C fornece uma interface consistente
ao programador C, independente do dispositivo real
que é acessado. Isso é, o sistema de E/S de C
provê um nível de abstração entre o programador e o dispositivo
utilizado.
Essa abstração é chamada de stream e o dispositivo real é chamado
de arquivo

Em C, um arquivo pode ser qualquer coisa, desde
um arquivo em disco até um terminal ou uma
impressora.

Cada stream associada a um arquivo tem uma estrutura
de controle de arquivo do tipo FILE. Essa estrutura é
definida no cabeçalho STDIO.H.

Função          Descrição
fopen()	        Abre um arquivo
putc(), fputc()	Escreve um caracter em um arquivo
getc(), fgetc()	Lê um caracter de um arquivo
fprintf()	    Equivalente a printf(), usando stream
sscanf()	    Equivalente a scanf(), usando string
fscanf()	    Equivalente a scanf(), usando stream
fseek()	        Posiciona o arquivo em um ponto específico
rewind()	    Posiciona o arquivo no início
feof()	        Retorna VERDADE se chegou ao fim do arquivo
ferror()	    Verifica a ocorrência de erro
fflush()	    Descarrega o buffer associado com o arquivo
fread()	        Leitura de dados no modo binário
fwrite()	    Escrita de dados no modo binário

Para ter acesso aos dados em um arquivo é necessário a definição
 de um ponteiro do tipo especial FILE.

 FILE *arq;

As operações mostradas a seguir mostram operações que devem ser
realizadas antes e depois de usar um arquivo (fopen() e fclose())


Antes de qualquer operação ser executada com o arquivo, ele deve ser aberto.

Um arquivo pode ser aberto de diversas maneiras: leitura, escrita,
leitura/escrita, adicão de texto, etc. A função utilizada para abrir o
arquivo é chamada fopen() e tem o seguinte protótipo:


FILE *fopen (const char *parq, const char *modo);


Modo	Descrição
r	  Abre um arquivo texto para leitura
w	  Cria um arquivo texto para escrita
a	  Adiciona texto ao fim de um arquivo texto
rb	  Abre um arquivo binário para leitura
wb	  Abre um arquivo binário para escrita
ab	  Anexa a um arquivo binário
r+	  Abre um arquivo texto para leitura/escrita
w+	  Cria um arquivo texto para leitura/escrita
a+	  Cria ou anexa a um arquivo texto para leitura/escrita
r+b	  Abre um arquivo binário para leitura/escrita
w+b	  Cria um arquivo binário para leitura/escrita
a+b	  Anexa a um arquivo binário para leitura/escrita

Observar que se um arquivo for aberto com permissão de
escrita todo o sue conteúdo anterior será apagado.
Caso o arquivo não exista ele será criado.
*/


int main()
{
    FILE *arq;
    arq = fopen ("arquivo.txt", "w");
    if (arq  == NULL )
    {	
        printf("O arquivo nao pode ser aberto.");
        return 1;
    }

    fclose (arq);

    return 0;
}
