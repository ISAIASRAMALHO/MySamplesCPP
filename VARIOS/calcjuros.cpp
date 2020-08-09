#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main()
{
    double p, tx, r;
    int ano;

    p = 10;
    tx = 0.05;
    ano = 10;
    //r = pow( p, tx);

    //cout << p << " elevado a " << tx << " resulta em " << r;
    cout << "Ano\t";
    cout << "Quantia em depósito" << endl;

    for (int i = 1; i <= ano; i++)
    {
        /* code */
        r = p * pow( 1.0 + tx , i);
        cout << i << "\t" << r << endl;
    }
    
    cout << "\n\nO valor de " << p << " rendeu em  " << ano << " anos " << "o valor de " << r - p << endl;   


    return 0;
}