#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    float nt1, nt2, media;
    char nome[30], resp;

    do{
    printf("Digite o nome do aluno:\n\n");
    fflush(stdin);
    gets(&nome);

    printf("Digite a sua primeira nota:\n\n");
    scanf("%f", &nt1);

    if(nt1 == 50){
        printf("\nPrograma encerrado");
        break;
    };

    printf("Digite a sua segunda nota:\n\n");
    scanf("%f", &nt2);

    if(nt1 >= 0 && nt1 <= 10 && nt2 >= 0 && nt2 <= 10){
        media = (nt1 + nt2)/2;
        printf("\nO valor da média do aluno: %s é: %.2f", nome, media);
    }else{
        printf("\nNota inválida");
    };

    printf("\nQuer cadastrar mais um aluno? < S = sim > < N = não >\n\n");
    fflush(stdin);
    resp = getchar();

    }while(resp == 's' || resp == 'S');


    return 0;
}
