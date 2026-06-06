/*

Author: Thiago de Araujo Rodrigues
Data: 06/06/26
Score: Accepted.

Link do desafio: https://judge.beecrowd.com/pt/problems/view/1015

*/

#include <stdio.h>
#include <math.h>

/*
    distance - Calcula a distancia entre 2 pontos.
    @param (x1,y1)(x2,y2) - pares cartesianos
    @return - Calculo aplicando a formula de distancia.
*/
double distance ( double x1, double y1, double x2, double y2 )
{
    double x3 = x2 - x1;
    double y3 = y2 - y1;
    double result = sqrt(pow(x3, 2) + pow(y3, 2));

    return ( result );
}


int main ()
{

    double x1 = 0;
    double x2 = 0;
    double y1 = 0;
    double y2 = 0;
    double resultado = 0.0;

    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);

    resultado = distance(x1, y1, x2, y2);
    printf("%.4lf", resultado);

    return 0;
}