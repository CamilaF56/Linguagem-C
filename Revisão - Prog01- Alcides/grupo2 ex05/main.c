#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int n1, n2, soma, p1q2, q1, raiz, seno, modulo;

    printf("Digite um número\n");
    scanf("%d", &n1);

    printf("Digite outro número\n");
    scanf("%d", &n2);

    soma = n1 + n2;
    printf("\n\nA soma dos números digitados é: %d\n", soma);

    p1q2 = n1 * (n2*n2);
    printf("\nO produto do primeiro pelo quadrado do segundo é: %d\n", p1q2);

    q1 = n1*n1;
    printf("\nO quadrado do primeiro valor digitado é: %d\n", q1);

    raiz = sqrt((n1*n1)+(n2*n2));
    printf("\nA raíz quadrada da soma dos quadrados é: %d\n", raiz);

    seno = sin((n1*n1) - (n2*n2));
    printf("\nO seno da diferença do quadrado do primeiro pelo segundo é: %d\n", seno);

    modulo = abs(n1);
    printf("\nO módulo do primeiro valor digitado é: %d\n", modulo);




    return 0;
}
