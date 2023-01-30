#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int op,or;

    FILE *file;
    file = fopen("textinho.txt", "r");

    char a[300];

    while(fgets(a, 300, file) != NULL){
        printf("%s", a);
    }
    fclose(file);

    printf("\n\n\t\t\tDigite 1 para falar com o pinguim\n");
    scanf("%d", &op);


    if(op==1){
    system("cls");
    FILE *ar;
    ar = fopen("textinho2.txt", "r");

    char b[300];

    while(fgets(b, 300, ar) != NULL){
        printf("%s", b);
    }
    fclose(ar);

    }else{
    printf("\ntecla inválida");
    };

    printf("\n\n\n\t\t\t\t\tDigite 2 para falar com o Finn\n\n");
    scanf("%d", &or);

    if(or==2){
    system("cls");
    FILE *arv;
    arv = fopen("textinho3.txt", "r");

    char c[300];

    while(fgets(c, 300, arv) != NULL){
        printf("%s", c);
    }
    fclose(arv);

    }else{
    printf("\ntecla inválida");
    };

    return 0;
}
