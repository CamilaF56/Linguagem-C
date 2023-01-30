#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    float pre, prenovo;

    printf("Digite o preço do produto:\n");
    scanf("%f", &pre);

    if(pre < 100){
        prenovo = pre*0.1;
        printf("\nO preço inflacionou e ficou de R$%.2f", prenovo+pre);
    }else{
        prenovo = pre*0.2;
        printf("\nO preço inflacionou e ficou de R$%.2f", prenovo+pre);

    };

    return 0;
}
