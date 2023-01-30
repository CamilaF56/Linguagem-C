#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    // Letra A - com double
    double faren, celsius;

    printf("Digite o valor da temperatura em Fahrenheit\n");
    scanf("%lf", &faren);

    celsius = (faren - 32.0) * (5.0/9.0);

    printf("O valor digitado: %.2lf Fahrenheit - corresponde a %.2lf Celsius", faren, celsius);

    // Letra B com Inteiro
    int farent, cel;

    printf("\n\nDigite o valor da temperatura em Fahrenheit\n");
    scanf("%d", &farent);

    cel = (farent - 32) * 0.5555;//a divisão de 5/9 precisou ser feita antes para se trabalhar com inteiro

    printf("O valor digitado: %d Fahrenheit - corresponde a %d Celsius", farent, cel);

    return 0;
}
