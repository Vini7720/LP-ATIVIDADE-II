
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    int num1, num2;

    printf("escreva o número 1: ");
    scanf("%d", &num1);

    printf("escreva o número 2: ");
    scanf("%d", &num2);

    if (num1 > num2) 
    {
        printf("O maior numero e %d o menor numero e %d.\n", num1, num2);
    } 
    else if (num2 > num1) 
    {
        printf("O maior numero e %d e o menor numero e %d.\n", num2, num1);
    } 
    else 
    {

        printf("Os numeros estão idênticos.\n");

    }

    return 0;
}
