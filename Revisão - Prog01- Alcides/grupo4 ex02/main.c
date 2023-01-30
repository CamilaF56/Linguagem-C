#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int valor[10], aux;

    // Leitura

    for(int x = 0; x < 10; x++){
        printf("Digite um valor\n");
        scanf("%d", &valor[x]);
    }

    // Ordenação

    for(int x = 0; x < 10 - 1; x++){
        for(int y = x + 1; y < 10; y++){
            if(valor[x] > valor[y]){
                aux = valor[x];
                valor[x] = valor[y];
                valor[y] = aux;
            };
        };
    };

    // Exibindo

    printf("\nA ordenação em ordem crscente é de");
    for(int x = 0; x < 10; x++){
        printf("\n%d", valor[x]);
    };


    return 0;
}
