/*

Author: Thiago de Araujo Rodrigues
Data: 06/06/26
Score: Accepted.

Link do desafio: https://judge.beecrowd.com/pt/problems/view/1044

*/

#include <stdio.h>

/*
    ismultiples - Verifica se dois numeros sao multiplos.
    @param x,y - Valor a ser calculados
*/
void ismultiples ( int x, int y )
{
    int resultado = 0;

    if ( x > y )
    {
        resultado = x % y; 
    }
    else
    {
        resultado = y % x;
    }

    if ( resultado == 0 )
    {
        printf("Sao Multiplos");
    }
    else
    {
        printf("Nao sao Multiplos");
    }

}

int main ()
{

    int x = 0;
    int y = 0;

    scanf("%d %d", &x, &y);
    ismultiples(x, y);

    return 0;
}