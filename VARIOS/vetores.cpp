/*
    CRIA UM VETOR COM 100 POSIÇÕES.
    COM VALORES ENTRE 10 E 50
    PESQUISA O MAIOR VALOR E QUANTAS VEZES ELE APARECE
    E EM QUAL POSIÇÕES ELE ESTÁ;
*/


#include <iostream>
#include <stdlib.h>
#include <time.h>

#define TAM 1000

using namespace std;

int main()
{
    srand( time( NULL ) );

    int vetor[TAM], maior, vezes, posicao;

    maior = 0;
    vezes = 0;
    posicao = 0;
    for (int i = 0; i < TAM; i++)
    {
        /* code */
        vetor[i] = rand() % 41 + 10;
        cout << vetor[i] << " ";

        // DESCOBRINDO QUAL É O MAIOR VALOR NO VETOR;
        if (vetor[i] > maior)
        {
            maior = vetor[i];
            posicao = i; 
        }
    }


    // MOSTRANDO QUANTAS VEZES O MAIOR VALOR APARECE NO VETOR.
    for (int i = 0; i < TAM; i++)
    {
        /* code */
        if (vetor[i] == maior)
        {
            /* code */
            vezes++;
        }
        
    }
    
    cout << "\n\nMaior valor no vetor: " << maior << "\nVezes em que foi encontrado: " << vezes << "\nPosição: " << posicao << "\n\n" << endl;

    return 0;
}