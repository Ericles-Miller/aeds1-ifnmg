#include <stdio.h>
#include <string.h>


 /*   strlen( string )
      strcpy(str1,str2)
      strcat(str1,str2)
      strcmp(str1,str2);
*/

int main()
{
    int tamanho, cmp;
    char str1[20]={"aula"};
    char str2[20]={"algoritmo"};

    /*tamanho = strlen(str1);
    printf("%s Tam: %i\n",str1,tamanho);
    strcpy(str1,str2);
    printf("%s\n",str1);
    printf("%s\n",str2);
    strcat(str1," ");
    strcat(str1,str2);
    printf("%s\n",str1);
    tamanho = strlen(str1);
    printf("%s Tam: %i\n",str1,tamanho);
    */
    cmp = strcmp("ana","an97");
    printf("%i\n",cmp);





    return 0;
}
