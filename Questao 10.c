#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int n1, n2;
int escolha;
int sub1;
int sub2;
int soma;

int main ()
{

  setlocale (LC_ALL, portuguese"");

  printf ("Escreva o primeiro numero:\n");
  scanf ("%i", &n1);

  printf ("Escreva o segundo numero:\n");
  scanf ("%i", &n2);

  printf ("Coloque a atividade:\n");
  printf ("Coloque o numero 1 para atividade: ( - )\n");
  printf ("Coloque o numero 2 para atividade: ( + )\n");
  scanf ("%i", &escolha);

  sub1 = n1-n2;
  soma= n1+n2;
switch (escolha)
{
case 1:
  printf("A subtracao dos numeros %i e %i e:%i\n", n1, n2, sub1);
  
  break;

  case 2:
  printf("A adicao dos numeros %i e %i e:%i\n", n1, n2, soma );
  break;

default:
printf("Essa opcao ficara errada !\n");
  break;
}
  return 0;
}
