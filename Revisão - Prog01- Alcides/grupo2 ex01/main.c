#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    float num, cent, deci, mili;

    printf("Digite um valor em metros\n");
    scanf("%f", &num);

    deci = num/10;
    cent = num/100;
    mili = num/1000;

    printf("Em dec�metros o valor � de: %.2f\n", deci);
    printf("Em cent�metros o valor � de: %.2f\n", cent);
    printf("Em milit�metros o valor � de: %.2f\n", mili);


    return 0;
}
