#include <stdio.h>

int main()
{
  int i;
  char str[20];
  printf("Digite um string: ");
  scanf("%s",str);
  for(i=0; str[i]!='\0';i++)
  {
      if(str[i]>=97 && str[i]<=122)
      {
          str[i] = str[i]-32;
      }
  }
  printf("%s\n",str);



    return 0;
}
