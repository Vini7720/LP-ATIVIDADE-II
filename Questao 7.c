#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int escolha;
int main()
{

    printf("Escolha uma opcao\n");
    printf("1 - Novo jogo \n");
    printf("2 - Carregar jogo \n");
    printf("3 - Configuracoes \n");
    scanf ("%i",&escolha);
    
    switch (escolha)
{
case 1:
   printf ("Comecando um jogo novo:\n");
    break;
    
    case 2:
   printf ("Levando um jogo em andamento:\n");
   
    break;
    
    case 3:
   printf ("Menu de Configuracoes:\n");
    break;

default:
printf ("A opcao sera invalida!");
    break;
}

    return 0;
}
