#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int conj[10], ver;
    float media, aux;

    for(int x = 0; x < 10; x++){
        printf("Digite um valor\n");
        scanf("%d", &conj[x]);
        aux += conj[x];
    }

    media = aux/5;

    for(int x = 0; x < 10; x++){
        if(conj[x] == media){
            ver == 1;
        }else{
            ver == 0;
        };
    };

    if(ver == 1){
        printf("\n\nUm dos números digitados foi igual a média dos mesmos\nA média foi de %.2f", media);
    }else{
        printf("\n\nNenhum número dos digitados foi igual a média dos mesmos\nA média foi de %.2f", media);
    };

    return 0;
}
