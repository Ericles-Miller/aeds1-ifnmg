#include<stdio.h>

/*1.Considerando como dados as notas de uma determinada turma (56 alunos) em um prova,
 escreva um algoritmo que imprima aquelas notas que estão acima da média das notas*/

 int main () {
 float notas[5],aprovados[5];
 int i,c=-1;

 for (i=0; i<5; i++)
 {
     printf("Digite a nota do aluno:\n");
     scanf(" %f",&notas[i]);

     if (notas[i]>=60)
     {    c+=1;
         aprovados[c]= notas[i];


     }
 }
 for (i=0; i<=c; i++)
     {
         printf("As notas dos aprovados foram:%.2f \n",aprovados[i]);
     }

 return 0;
 }
