#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    int num1, num2;

    printf("escreva o numero 1: ");
    scanf("%d", &num1);

    printf("escreva o numero 2: ");
    scanf("%d", &num2);

    if (num1 > num2)

    {
        printf("O numero maior e %d o numero menor e %d.\n", num1, num2);
    } 
    else if (num2 > num1) 
    {
        printf("O numero maior e %d o numero menor e %d.\n", num2, num1);
    } 
    else 
    {

        printf("Os numeros estao identicos.\n");

    }

    return 0;
}

   
