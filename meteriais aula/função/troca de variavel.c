#include<stdio.h>
void troca(int *pa,int *pb)
{
    int aux;
    aux=*pa;
    *pa=*pb;
    *pb=aux;

}
int main()
{
    int x=10,y=7;
    troca(&x,&y);
    printf("x:%i y:%i\n",x,y);
    return 0;
}
