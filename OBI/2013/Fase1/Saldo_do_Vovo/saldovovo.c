/*

Author: Thiago de Araujo Rodrigues
Data: 06/06/26
Score: 90/100.

Link do desafio: https://olimpiada.ic.unicamp.br/pratique/pj/2013/f1/saldo/#

*/


#include <stdio.h>


/*
printArray - Imprime na tela um array - Usado para testes.
@param array - Arranjo de inteiros,
@param tamanho - Tamanho do arranjo.
*/
void printArray(int *array, int tamanho)
{
    int resultado = 0;

    for (int x = 0; x < tamanho; x = x + 1)
    {
        resultado = array[x];
        printf("%d ", resultado);
    }
}

/*
lowerBalance - Calcula o menor valor em um periodo.
@param array - Arranjo de inteiros,
@param tamanho - Tamanho do arranjo.
@param saldo - Saldo inicial.

@return - Menor saldo durante o periodo.
*/
int lowerBalance( int *array, int tamanho, int saldo)
{
    int saldoatual = saldo;
    int menorsaldo = saldo;
    int tmp1 = 0;

    for ( int x = 0; x < tamanho; x = x + 1)
        {
            tmp1 = saldoatual; // guarda o valor de saldo atual dentro de uma variavel temporaria
            saldoatual = saldoatual + array[x]; // faz a soma de saldo atual com cada valor dentro do arranjo

            // printf("\nSaldo Atual: %d", saldoatual);

            if ( tmp1 < menorsaldo && tmp1 < saldoatual){ // Se a tmp1 for menor que menorsaldo e tmp1 for menor que saldoatual
                                                          // guarda dentro de menorsaldo o valor lido.
                
                menorsaldo = tmp1;
                // printf("\nMenor saldo: = %d", menorsaldo);
                }
        }

    return ( menorsaldo );

}


int main ()
{
    int intervalo = 0;
    int sInicial = 0;
    int saldo    = 0;
    int resultado = 0;


    if (scanf("%d %d", &intervalo, &sInicial) != 2) // Recebe 2 valores inseridos pelo usuario referentes ao periodo e saldo inicial 
                                                    // se receber algum valor alem de dois numeros, sai do programa.
        return 1;

    int periodo[intervalo]; // cria um arranjo com o tamanho do intervalo.

    int x = 0;
    while ( x < intervalo )
    {
        if (scanf("%d", &saldo) != 1) // Recebe 1 valor por vez, se receber mais de um, sai do programa.
            return 1;
        periodo[x] = saldo; // guarda dentro do arranjo todos os valores lidos.
        x++;
    }

    // printArray(periodo, intervalo); 
    resultado = lowerBalance(periodo, intervalo, sInicial);
    printf("%d", resultado);

    return 0;
}