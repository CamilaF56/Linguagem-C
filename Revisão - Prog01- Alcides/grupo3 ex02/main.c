#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Potuguese");

    for(int x = 0; x <= 127; x++){
        printf("decimal: %d - hexadecimal: %x - caracter: %c\n", x, x, x);
    };

    return 0;
}
