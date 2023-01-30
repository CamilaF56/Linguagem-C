#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int i;

    printf("Digite o número de posições do array\n");
    scanf("%d", &i);

    double array[i];

    for(int x = 0; x < i; x++){
        printf("Digite um número\n");
        scanf("%lf", &array[x]);
    }

    printf("Os números digitados foram:\n");
    for(int x = 0; x < i; x++){
        printf("%.2lf\n", array[x]);
    };


    return 0;
}
