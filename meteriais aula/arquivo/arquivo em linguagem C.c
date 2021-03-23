#include <stdio.h>
#include <stdlib.h>

/*
O padr�o C ANSI define um conjunto completo
de fun��es de E/S que pode ser utilizado para
ler e escrever qualquer tipo de dado.

O sistema de E/S de C fornece uma interface consistente
ao programador C, independente do dispositivo real
que � acessado. Isso �, o sistema de E/S de C
prov� um n�vel de abstra��o entre o programador e o dispositivo
utilizado.
Essa abstra��o � chamada de stream e o dispositivo real � chamado
de arquivo

Em C, um arquivo pode ser qualquer coisa, desde
um arquivo em disco at� um terminal ou uma
impressora.

Cada stream associada a um arquivo tem uma estrutura
de controle de arquivo do tipo FILE. Essa estrutura �
definida no cabe�alho STDIO.H.

Fun��o          Descri��o
fopen()	        Abre um arquivo
putc(), fputc()	Escreve um caracter em um arquivo
getc(), fgetc()	L� um caracter de um arquivo
fprintf()	    Equivalente a printf(), usando stream
sscanf()	    Equivalente a scanf(), usando string
fscanf()	    Equivalente a scanf(), usando stream
fseek()	        Posiciona o arquivo em um ponto espec�fico
rewind()	    Posiciona o arquivo no in�cio
feof()	        Retorna VERDADE se chegou ao fim do arquivo
ferror()	    Verifica a ocorr�ncia de erro
fflush()	    Descarrega o buffer associado com o arquivo
fread()	        Leitura de dados no modo bin�rio
fwrite()	    Escrita de dados no modo bin�rio

Para ter acesso aos dados em um arquivo � necess�rio a defini��o
 de um ponteiro do tipo especial FILE.

 FILE *arq;

As opera��es mostradas a seguir mostram opera��es que devem ser
realizadas antes e depois de usar um arquivo (fopen() e fclose())


Antes de qualquer opera��o ser executada com o arquivo, ele deve ser aberto.

Um arquivo pode ser aberto de diversas maneiras: leitura, escrita,
leitura/escrita, adic�o de texto, etc. A fun��o utilizada para abrir o
arquivo � chamada fopen() e tem o seguinte prot�tipo:


FILE *fopen (const char *parq, const char *modo);


Modo	Descri��o
r	  Abre um arquivo texto para leitura
w	  Cria um arquivo texto para escrita
a	  Adiciona texto ao fim de um arquivo texto
rb	  Abre um arquivo bin�rio para leitura
wb	  Abre um arquivo bin�rio para escrita
ab	  Anexa a um arquivo bin�rio
r+	  Abre um arquivo texto para leitura/escrita
w+	  Cria um arquivo texto para leitura/escrita
a+	  Cria ou anexa a um arquivo texto para leitura/escrita
r+b	  Abre um arquivo bin�rio para leitura/escrita
w+b	  Cria um arquivo bin�rio para leitura/escrita
a+b	  Anexa a um arquivo bin�rio para leitura/escrita

Observar que se um arquivo for aberto com permiss�o de
escrita todo o sue conte�do anterior ser� apagado.
Caso o arquivo n�o exista ele ser� criado.
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
