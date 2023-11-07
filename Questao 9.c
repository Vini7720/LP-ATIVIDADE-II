#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
  
    setlocale (LC_ALL,"Portuguese");
    
    int n, i;
    int primo = 1; 

    printf("Coloque um número: ");
    scanf("%d", &n);

    switch (n)
    {
    case 0:
    case 1:

        break;
    default:
        for (i = 1; i <= n/ 2; i++)
           {
            if (n % i == 0)
              {
                primo = 0;
                break;
              }
           }
    }
    if (primo)
    {
        printf("Número primo\n");
    }
    else
    {
        printf("Número não primo\n");
    }

    return 0;
}
