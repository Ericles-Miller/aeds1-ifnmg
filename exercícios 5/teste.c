#include<stdio.h>
int main()
{
    int m[5][5],l,c;
    for(l=0;l<5;l++)
    {
        for(c=0;c<5;c++)
        {
            printf("(%i,%i):",l,c);
            scanf("%i ",&m[l][c]);
        }
    }

    return 0;
}
