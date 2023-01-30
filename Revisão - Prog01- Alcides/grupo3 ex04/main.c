#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    float n1, n2, result;
    char ope;

    printf("Digite um número:\n");
    scanf("%f", &n1);

    printf("Digite um operador aritimético:\n");
    fflush(stdin);
    ope = getchar();

    printf("Digite outro número:\n");
    scanf("%f", &n2);

    switch(ope){
    case '+':
        result = n1 + n2;
        printf("\n<%.2f> <%c> <%.2f> = <%.2f>", n1, ope, n2, result);
    break;
    case '-':
        result = n1 - n2;
        printf("\n<%.2f> <%c> <%.2f> = <%.2f>", n1, ope, n2, result);
    break;
    case '*':
        result = n1 * n2;
        printf("\n<%.2f> <%c> <%.2f> = <%.2f>", n1, ope, n2, result);
    break;
    case '/':
        result = n1 / n2;
        printf("\n<%.2f> <%c> <%.2f> = <%.2f>", n1, ope, n2, result);
    break;
    default:
        printf("\nOperador inválido");
    };

    return 0;
}
