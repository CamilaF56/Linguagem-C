#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    float pre, prenovo;

    printf("Digite o pre�o do produto:\n");
    scanf("%f", &pre);

    if(pre < 100){
        prenovo = pre*0.1;
        printf("\nO pre�o inflacionou e ficou de R$%.2f", prenovo+pre);
    }else{
        prenovo = pre*0.2;
        printf("\nO pre�o inflacionou e ficou de R$%.2f", prenovo+pre);

    };

    return 0;
}
