#include <stdio.h>

int main()
{
    int i,j;
    float notas[3][2] = {9.8,9.9,
                         8.7,8.7,
                         5.2,7.3};
    for(i=0;i<3;i++)
    {
      for(j=0;j<2;j++)
      {
          printf("%.1f ",notas[i][j]);
      }
      printf("\n");
    }


    return 0;
}
