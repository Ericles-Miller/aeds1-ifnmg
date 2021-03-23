#include <stdio.h>
#include <stdlib.h>

float media(float a, float b, float c, char tm);

int main()
{
    float x=10.0,y=9.9,z=9.8;

    printf("Resultado: %.2f\n", media(1.2,2.2,3.2,'A') );
    printf("Resultado: %.2f\n", media(x,y,z+2.7,'P') );

    return 0;
}

float media(float a, float b, float c, char tm)
{
    if(tm == 'A')
    {
        return (a+b+c)/3;
    }
    else
    {
        return (a*3+b*2+c*5)/10;
    }
}
