#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int n1, n2, soma, p1q2, q1, raiz, seno, modulo;

    printf("Digite um n�mero\n");
    scanf("%d", &n1);

    printf("Digite outro n�mero\n");
    scanf("%d", &n2);

    soma = n1 + n2;
    printf("\n\nA soma dos n�meros digitados �: %d\n", soma);

    p1q2 = n1 * (n2*n2);
    printf("\nO produto do primeiro pelo quadrado do segundo �: %d\n", p1q2);

    q1 = n1*n1;
    printf("\nO quadrado do primeiro valor digitado �: %d\n", q1);

    raiz = sqrt((n1*n1)+(n2*n2));
    printf("\nA ra�z quadrada da soma dos quadrados �: %d\n", raiz);

    seno = sin((n1*n1) - (n2*n2));
    printf("\nO seno da diferen�a do quadrado do primeiro pelo segundo �: %d\n", seno);

    modulo = abs(n1);
    printf("\nO m�dulo do primeiro valor digitado �: %d\n", modulo);




    return 0;
}
