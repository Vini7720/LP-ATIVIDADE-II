#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int escolha;
int main()
{
    printf("Indique um idioma de sua preferencia:\n");
    printf("1 - Ingles:\n");
    printf("2 - Espanhol:\n");
    printf("3 - Frances:\n");
    scanf ("%i",&escolha);
    
    switch (escolha)
{
case 1:
   printf ("Seja bem-recebido(a), o idioma indicado foi o Ingles.");
    break;
    
    case 2:
   printf ("Seja bem-recebido(a), o idioma indicado foi o Espanhol.");
    break;
    
    case 3:
   printf ("Seja bem-recebido(a), o idioma indicado foi o Frances.");
    break;

default:
printf ("A opcao sera invalida!");
    break;
}

    return 0;
}
