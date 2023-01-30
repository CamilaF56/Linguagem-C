#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int l, c;
    float m[5][3], medial, auxl, mediac, auxc, dif, al, ac;

    printf("\t\t\tMatriz\n");
    // Lendo os valores
    for(l = 0; l < 5; l++){
        for(c = 0; c < 3; c++){
            printf("Digite um valor para a posição %1f - %1f = \n", l+1, c+1);
            scanf("%f", &m[l][c]);
        }
    }

    // Exibindo a matriz
    for(l = 0; l < 5; l++){
        printf("|");
        for(c = 0; c < 3; c++){
            printf("%1f\n", m[l][c]);
        }
        printf(" |");
    }

    // Média
    al = m[l]%2;
    if(al == 0){
        for(l = 0; l < 5; l++){
            auxl += m[l];
        };
    };

    ac = m[c]%2;
    if(ac != 0){
        for(c = 0; c < 3; c++){
        auxc += m[c];
        };
    };

    medial = auxl/5;
    mediac = auxc/3;

    // Exibindo o resultado
    if(medial > mediac){
        dif = medial - mediac;
        printf("\n\nA diferença entre a média dos elementos das colunas pares e a média dos elementos das linhas ímpares é de %.2f", dif);
    }else{
        dif = mediac - medial;
        printf("\n\nA diferença entre a média dos elementos das colunas pares e a média dos elementos das linhas ímpares é de %.2f", dif);
    };

    return 0;
}
