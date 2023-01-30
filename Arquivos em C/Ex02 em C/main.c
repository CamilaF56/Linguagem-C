#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* entrada;

    FILE* saida;

    entrada = fopen("arq1.txt", "r");

    saida = fopen("arq2.txt", "w+");

    int n1, n2, n3;

    fscanf(entrada, "%d %d %d", &n1, &n2, &n3);

    fprintf(saida,"A soma dos primeiros 3 números é de %d\n", n1+n2+n3);

    fclose(entrada);
    fclose(saida);



    return 0;
}
