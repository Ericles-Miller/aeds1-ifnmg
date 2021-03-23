#include <stdio.h>

int main()
{
  float f = 35,
        *pf=NULL,
        **ppf = NULL;
  pf = &f;
  ppf = &pf;
  printf("f: %f\n",f);
  printf("&pf: %p pf: %p\n",&pf,pf);
  printf("&ppf: %p ppf: %p\n",&ppf,ppf);
  printf("*pf: %f\n",*pf);
  printf("*ppf: %p\n",*ppf);
  printf("**ppf: %f\n",**ppf);



    return 0;
}
