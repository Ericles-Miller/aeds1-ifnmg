#include <stdio.h>

int main()
{
    int a = 10, b = 5, ri=2;
    float z = 10.0, y = 5.0, rf;

    ri = -a++ + 10;
    printf("%i\n", ri);

    ri -= --z;
    printf("%i\n", ri);

    ri = a-- * 3 + --a;
    printf("%i\n", ri);

    ri += -a++ + b++ * 2 ;
    printf("%i\n", ri);

    a++;
    rf = 0.5 + a++ / ++b * 2 ;
    printf("%f\n", rf);

    /*
    a++;
    rf = 0.5 / a++ % ++b * 2 ;
    printf("%f\n", rf);

    rf = (z-- + y++) % ++b / 2 ;
    printf("%f\n", rf);
    /**/

    ri = c != letra && letra == 'z';
    printf("%i\n", ri);

    ri = a <= b || letra == 'z' && b >= 10;
    printf("%i\n", ri);

    ri = b != b || letra == 'z' && letra == '@';
    printf("%i\n", ri);

    ri = b != b || !( letra == 'z' && letra == '@' );
    printf("%i\n", ri);

    ri = !(b != a ) && ( letra == 'z' || letra == '@' );
    printf("%i\n", ri);

    ri = !( !(b != a ) && !( letra == 'z' || letra == '@' ));
    printf("%i\n", ri);

    return 0;
}

b = 1, a = 10;

b + a * a++;
1 + 10 * 10
