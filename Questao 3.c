
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>

int
main ()
{
  setlocale (LC_ALL, "Portuguese");

  float nota;

  printf ("Escreva a nota:\n");
  scanf ("%f", &nota);

  if (nota >= 9)
    {
      printf ("Nota excelente\n");
    }
  else if (nota >= 7 && nota <= 8.9)
    {
      printf ("Nota boa\n");
    }
  else if (nota >= 5 && nota <= 6.9)
    {
      printf ("Nota razoavel\n");
    }
  else
    {
      printf("Nota baixa\n");
    }


  return 0;
}