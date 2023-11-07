#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int escolha;
int main()
{

    printf("Escolha um produto\n");
    printf("1 - Camisa R$30,00\n");
    printf("2 - Calca R$50,00\n");
    printf("3 - Sapato R$80,00\n");
    scanf ("%i",&escolha);
    
    switch (escolha)
{
case 1:
   printf ("Produto Camisa:\n");
    printf ("Valor R$ 30,00.\n");
    break;
    
    case 2:
   printf ("Produto Calca:\n");
    printf ("Valor R$ 50,00.\n");
    break;
    
    case 3:
   printf ("Produto Sapato:\n");
    printf ("Valor R$ 80,00.\n");
    break;

default:
printf ("A opcao sera invalida!");
    break;
}

    return 0;
}
