#include <stdio.h>

int main()
{
  int i,vezes=0;
  char str[20],c;
  printf("Digite um caractere: ");
  scanf("%c",&c);

  printf("Digite um string: ");
  scanf("%s",str);
  for(i=0; str[i]!='\0';i++)
  {
      if(str[i] == c)
      {
          vezes++;
      }
  }
    printf("Repeticoes: %i\n",vezes);


    return 0;
}
