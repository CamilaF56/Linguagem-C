#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    float hexa;
    int n;
    printf("Digite um número\n");
    scanf("%d", &n);

    if(n > 0){
        for(int x = 0; x < hexa==0; x++ ){
            hexa = hexa + n%16;
        };
        printf("\no hexa do numero digitado é %f", hexa);
    }else{
        printf("o hexa do numero digitado é %f", hexa);
    };


    return 0;
}
