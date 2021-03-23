#include <stdio.h>

int main()
{
    int v[3] = {2,4,6},*pv=NULL;
    pv = v;
    printf("v: %p\n",v);
    printf("pv: %p\n",pv);
    printf("&pv: %p\n",&pv);
    return 0;
}
