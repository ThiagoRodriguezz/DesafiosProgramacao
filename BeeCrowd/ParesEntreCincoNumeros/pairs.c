/*

Author: Thiago de Araujo Rodrigues
Data: 06/06/26
Score: Accepted.

Link do desafio: https://judge.beecrowd.com/pt/problems/view/1065

*/

#include <stdio.h>

int main ()
{
    int x           = 0;
    int contadorPar = 0;

    int y = 0;
    while ( y < 5)
    {
        scanf("%d", &x);
        if ( x % 2 == 0 )
        contadorPar++;
        y++;
    }

    printf("%d valores pares\n", contadorPar);
    return 0;
}