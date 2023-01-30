#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    printf("Tabuada do 9");

    for(int x = 0; x <= 10; x++){
        printf("\n%d x %d = %d\n", x, 9, x*9);
    }

    return 0;
}
