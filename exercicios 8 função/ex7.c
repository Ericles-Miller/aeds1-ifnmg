#include<stdio.h>
#include<stdlib.h>
/*7 Fa�a uma fun��o que receba as tr�s notas de um aluno como par�metros e uma letra.
Se a letra for A a fun��o calcula a m�dia aritm�tica das notas do aluno,
 se for P a fun��o calcula a m�dia ponderada com pesos 5, 3 e 2.
 A m�dia calculada deve ser devolvida ao fun��o main para, ent�o, ser mostrada.*/

float calc_media (float na, float nb, float nc, char m)
{
    float media;
   if (m=='a')
   {
       media=(na+nb+nc)/3;

    return media;
   }
   else
    media=(na*5 + nb*3 + nc*2)/10;

    return media;
}

int main()
{
    float t,a,b,c;
    char x;

   printf("Digite 3 notas:");
   scanf("%f %f %f",&a ,&b ,&c);
   printf("Digite A para aritimetica e P para ponderada:");
   scanf(" %c",&x);

   t= calc_media(a,b,c,x);

   printf("A media �:%.2f", t);

return 0;
}

