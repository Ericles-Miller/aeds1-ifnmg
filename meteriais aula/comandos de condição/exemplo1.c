#include <stdio.h>

int main()
{
  char tm;
  float n1,n2,n3,media;
  printf("Digite tipo da media: ");
  scanf("%c", &tm);
  printf("Digite tres valores reais: ");
  scanf("%f%f%f",&n1,&n2,&n3);
    /* media ponderada */
    if( tm == 'p')
    {
      media = (n1*2+n2*3+n3*5) / 10;
      printf("Media ponderada: %.2f\n",media);
    }
  /* media aritmetica */
  if(tm == 'a')
  {
     media = (n1+n2+n3)/3;
     printf("Media aritmetica: %.2f\n",media);
  }

    return 0;
}
