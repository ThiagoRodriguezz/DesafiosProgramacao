/*

Author: Thiago de Araujo Rodrigues
Data: 06/06/26
Score: 100/100.

Link do desafio: https://olimpiada.ic.unicamp.br/pratique/pj/2013/f1/tomadas/

*/


#include <stdio.h>

int main (){

    int T_1  = 0;
    int T_2  = 0;
    int T_3  = 0;
    int T_4  = 0;
    int soma = 0; 

    scanf("%d %d %d %d", &T_1, &T_2, &T_3, &T_4);
    soma = T_1 + T_2 + T_3 + T_4;
    soma = soma - 3; // Conforme o enunciado, pode se conectar uma regua na outra regua pra poder aumentar o numero de tomadas,
                     // porem como a cada vez que se conecta uma regua na outra se ocupa uma tomada disponivel, subtraimos essas 
                     // tomada da soma total. Como temos 4 inputs, podemos conectar 3 reguas uma na outra e uma regua na tomada, 
                     // ficamos com 3 tomadas ocupadas exclusivamente para reguas.
    printf("%d", soma);

    return 0;
}