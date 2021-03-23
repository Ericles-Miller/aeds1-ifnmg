#include<stdio.h>
float media(float a,float b,float c,char tm)
{
    float m;
    if(tm=='a'|| tm =='A')
    {
        return (a+b+c)/3;
    }
    else
    {
        return(a*5+b*3+c*2)/10;
    }
}
int main()
{
    float n1,n2,n3;
    char m;
    printf("Digite tipo de media:");
    scanf("%c",&m);
    printf("Digite tres notas: ");
        scanf("%f%f%f",&n1,&n2,&n3);

    printf("Media: %.2f\n",media(n1,n2,n3,m));
    return 0;
}
