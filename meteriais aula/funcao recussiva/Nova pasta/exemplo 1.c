#include<stdio.h>
int pontencial(int b,int e)
{
    if(e==0)
    {
        return 1;
    }
    else
    {
        return b * pontencial(b,e-1);

    }

}
int main()
{
    int x=2,y=3;
    printf("Res: %i\n",pontencial(2,3));
    return 0;
}
