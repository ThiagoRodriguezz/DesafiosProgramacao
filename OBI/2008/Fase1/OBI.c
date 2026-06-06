/*

Author: Thiago de Araujo Rodrigues
Data: 06/06/26
Score: 100/100.

Link do desafio: https://olimpiada.ic.unicamp.br/pratique/pj/2008/f1/obi/

*/

#include <stdio.h>

int main ()
{

    int competitores = 0;
    int pMinima      = 0;
    int x            = 0;
    int y            = 0;
    int contador     = 0;

    scanf("%d %d", &competitores, &pMinima);

    int k = 0;
    while ( k < competitores)
    {
        scanf("%d %d", &x, &y);
        if ( x + y >= pMinima)
        {
            contador++;
        }
        k++;
    } 

    printf("%d", contador);
    return 0;
}