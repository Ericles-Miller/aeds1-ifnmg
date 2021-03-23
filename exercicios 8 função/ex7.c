#include<stdio.h>
#include<stdlib.h>
/*7 Faça uma função que receba as três notas de um aluno como parâmetros e uma letra.
Se a letra for A a função calcula a média aritmética das notas do aluno,
 se for P a função calcula a média ponderada com pesos 5, 3 e 2.
 A média calculada deve ser devolvida ao função main para, então, ser mostrada.*/

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

   printf("A media é:%.2f", t);

return 0;
}

