#include <stdio.h>
#include <math.h>

#define PI 3.1415926

int main()
{
	double param, result, x = 9.75;
	double arredonda_pbaixo = 0.0;
	double arredonda_pcima = 0.0;

		printf("\nFuncoes de arredondamento e valor absoluto\n\n");
		printf("Valor original de x = %f\n",x);

		arredonda_pbaixo = floor(x);
		printf("Valor aproximado para baixo %f\n", arredonda_pbaixo );

		arredonda_pcima = ceil(x);
		printf("Valor aproximado para cima %f\n", arredonda_pcima);

        /* double fabs (double x); */
		printf ("Valor absoluto -10.6 = %.2f\n", fabs(-10.6) );

        printf("\nFuncoes trigonometricas\n\n");
		/* double cos (double x); */
		param = 60.0;
		result = cos ( param * 3.14159265 / 180.0 ); /* cosseno .... o parâmetro tem que estar em radiano valor * PI  /180  */
		printf ("Cosseno %.2f = %.2f\n", param, result );

		/* double sin(double x); */
		param = 30.0; /* seno */
		result = sin (param*PI/180);
		printf ("Seno:  %.2f = %.2f\n", param, result );

		/* double tan (double x); */
		param = 45.0; /* tangente*/
		result = tan ( param * PI / 180.0 );
		printf ("Tangente %.2f = %.2f\n", param, result );

		printf("\nFuncoes de raiz e potenciacao \n\n");
		/* double exp (double x); */
		param = 5.0;
		printf ("Euler: e^%.2f = %.2f\n", param, exp(param) );

		/* double pow (double base, double exponent); */
		printf ("Exponenciacao: 7 ^ 3 = %.2f\n", pow (7.0, 3.0) ); /* exponenciação*/

		/* double sqrt (double x); */
		param = 1024.0;
		result = sqrt (param); /* raiz quadrada*/
		printf ("Raiz quadrada %.2f = %.2f\n", param, result );

		printf("\nFuncoes logaritmicas\n\n");
		/* double log (double x); */
		param = 5.5;
		result = log (param); /*logaritmo natural tem que verificar se o param é maior que zero*/
		printf ("log(%f) = %.2f\n", param, result );

		/* double log10 (double x); */
		param = 1000.0;
		result = log10 (param); /* logaritmo na base 10*/
		printf ("log10(%f) = %.2f\n", param, result );


  return 0;
}
