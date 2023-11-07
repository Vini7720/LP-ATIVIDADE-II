#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int
main ()

{
  int numero;


  printf ("Escreva 1 numero ");
  scanf ("%d", &numero);

if (numero < 0)
    {

      printf ("Numero errado.\n");
      return 0;

    }

  while (numero >= 0)
    {


      printf ("%d\n", numero);
      numero--;

    }


  return 0;
}
