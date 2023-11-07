#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>

int idade;

int main()
{
  setlocale (LC_ALL, "Portuguese");

  
  printf ("Qual idade voce tem\n");
  scanf ("%i",&idade);
  
  if (idade >=18)
  {
      printf("Acesso permitido");
  }
  else
  {
      printf("Acesso negado");
  }


  return 0;
}
