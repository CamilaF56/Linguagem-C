#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int n1, n2;

    printf("Digite um número\n");
    scanf("%d", &n1);

    printf("Digite outro númeroo\n");
    scanf("%d", &n2);

    if(n1 < n2){
        printf("\n\tLista: \n %d \n %d", n1, n2);
    }else if(n1 == n2){
        printf("\n\nvalores iguais %d e %d\n", n1, n2);
    }else{
        printf("\n\tLista: \n %d \n %d", n2, n1);
    };


    return 0;
}
