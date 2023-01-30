#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    FILE *fp;
    char string[100];
    int i;

    fp = fopen("arquivo.txt","w");
    printf("Escreva aí o que você quer no arquivo\n");
    gets(string);

    for(i=0; string[i]; i++){
        putc(string[i], fp);
    };

    fclose(fp);

    return 0;
}
