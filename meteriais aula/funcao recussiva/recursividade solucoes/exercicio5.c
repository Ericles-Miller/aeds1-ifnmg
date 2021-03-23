#include <stdio.h>
void inverta(char *str)
{
    if( *str == '\0')
    {
        return;
    }
    else
    {
        inverta(str+1);
        printf("%c",*str);
    }
}
int main()
{
    char str[20]={"oi"};
    inverta(str);
    return 0;
}






