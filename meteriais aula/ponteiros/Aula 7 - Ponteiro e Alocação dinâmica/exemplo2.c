#include <stdio.h>

int main()
{
    int v[3]={2,4,6},a=10,b=7;
    int *pv = NULL;

    pv = &v;
    printf("&v = %p\n",pv);

    pv = v;
    printf("v = %p\n",pv);

    pv = &v[0];
    printf("&v[3] = %p\n",pv);
    printf("&a=%p\n",&a);

    /*v = pv;  erro: nao podemos alterar o endereco armazenado na variavel v*/

    /*v[0] = v[0]+v[1]; forma indexada de acessar os elementos do vetor */

    printf("v[0]: %p %i\n",pv+0,*(pv+0));
    printf("v[1]: %p %i\n",pv+1,*(pv+1));
    printf("v[2]: %p %i\n",pv+2,*(pv+2));






    return 0;
}
