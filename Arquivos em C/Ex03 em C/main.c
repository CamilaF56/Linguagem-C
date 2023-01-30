#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* entrada;

    FILE* saida;

    entrada = fopen("story.txt", "r");

    if(entrada == NULL){
        printf("A abertura do arquivo de entrada falhou.\n");
    }

    saida = fopen("numstory.txt", "w");

    if(saida == NULL){
        printf("A abertura do arquivo de saida falhou.\n");
    }

    char next;
    int n = 1;

    fprintf(saida, "%d\n  ", n);

    while(!eof(entrada)){
        fprintf(saida, next);
        if(next == "\n"){
            n++;
            fprintf(saida, n, "' '");
        }
        next = getc(entrada);
    }

    fclose(entrada);
    fclose(saida);

    return 0;
}
