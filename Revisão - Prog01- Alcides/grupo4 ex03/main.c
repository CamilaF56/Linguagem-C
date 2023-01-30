#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    float nota[5], media, aux;

    // Lendo cada nota
    for(int x = 0; x < 5; x++){
        printf("Digite a sua nota:\n");
        scanf("%f", &nota[x]);
    };

    for(int x = 0; x < 5; x++){
        aux += nota[x];
    };

    media = aux/5;

    printf("\n\nA média do aluno foi de %.2f", media);


    return 0;
}
