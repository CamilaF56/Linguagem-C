#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arq;

    arq = fopen("arq.txt", "w");

    if(arq != NULL){
        printf("Arquivo aberto com sucesso\n");
        fprintf(arq, "Universidade Federal de Sergipe\n");
        fprintf(arq, "Departamento de Sistemas de Informação");
        fclose(arq);
            printf("Arquivo fechado com sucesso\n");
    }else{
        printf("Não foi possivel abrir o arquivo");
    }

    char s[30];

    FILE* ler;

    ler = fopen("arq.txt", "r");

    if(ler != NULL){
        printf("Arquivo aberto com sucesso\n");

    }

    while(fgets(s, 30, ler)){
        printf(s);
    }

    fclose(ler);

    printf("\nArquivo fechado com sucesso");

}
