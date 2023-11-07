#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int temperatura;

int
main ()
{
  setlocale (LC_ALL, "");
  

  printf ("No momento qual a temperatura?\n");
  scanf ("%i", &temperatura);

  if (temperatura > 25)
    {
      printf ("Hoje o clima fica ensolarado!\n");
    }

  else if (temperatura < 15)
    {
      printf ("O clima fica chuvoso!");
    }

  else
    {
      printf ("O clima fica nublado!");
    }



  return 0;
}
