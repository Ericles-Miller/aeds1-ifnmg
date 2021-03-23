#include<stdio.h>
#include <stdlib.h>
#include<string.h>


int main()
{
    char str1[20];
    int i,j,cont,sub,a;

    printf("Nome:");
    scanf("%s",str1);
    printf("Numeros:");
    scanf("%i%i",&i,&j);


    if (i>j)
    {
        sub= i-j;
        char str2[sub];



        for(cont=i; cont=j; cont++)
        {

            str2= str1[cont];
        }
    }
    else
     {
        sub=j-i;
        char str2[sub];

        for(cont=j; cont<=i; cont++)
        {
            str2[cont]= str1[cont];


        }
 printf("%s",str2);
     }
return 0;
}



