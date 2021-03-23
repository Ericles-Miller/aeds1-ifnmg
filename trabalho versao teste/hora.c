#include <time.h>
#include <stdio.h>
#include<locale.h>
// pega a data e hora atual e imprime na tela
int main()
{
setlocale(LC_ALL, "Portuguese");

	char dataa[9];
	char hora[9];

	// pega a data atual
	_strdate( dataa );
	printf( "A data padrão americano eh essa %s \n", dataa);

	// pega a hora atual
	_strtime( hora );
	printf( "A hora eh essa %s \n", hora);

	getchar();
	return 0;
}
