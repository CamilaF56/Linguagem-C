#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int valor[10], menor = rand() , maior = 0, x;

    for(x = 0; x < 10; x++){
        printf("Digite um valor: \n");
        scanf("%d", &valor[x]);
        if (valor[x] > maior) {
            maior = valor[x];
        };
        if (valor[x] < menor) {
            menor = valor[x];
        };
    };

    printf("\nO menor valor lido foi de %d", menor);
    printf("\nO maior valor lido foi de %d", maior);

    return 0;
}
