#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    char pesq[30], nome[2][30];
    int en;

    for(int x = 0; x < 2; x++){
        printf("\nDigite o nome para cadastrar:\n");
        fflush(stdin);
        gets(nome[x]);
    };

    printf("\nDigite o nome para buscar:\n");
    fflush(stdin);
    gets(pesq);

    for(int y = 0; y < 2; y++){
       if(strcmp(pesq, nome[y])){
            en=1;
            break;
        }else if(pesq!=nome[y]){
            en=0;
        };
    };

    if(en==1){
        printf("\nNome encontrado no sistema.\n");
    }else if(en==0){
        printf("\nNome nao encontrado no sistema.\n");
    };

    return 0;
}
