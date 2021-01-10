#include <iostream>

using namespace std;

void matriz( int mat[100][100], int linhas, int colunas);
void ExibeMatriz( int mat[100][100], int linhas, int colunas);


int main()
{
    int x[100][100];
    int n;
    
    cout << "Digite a Dimensão da Matriz: ";
    cin >> n;
    matriz(x, n, n);
    ExibeMatriz( x, n, n);

    return 0;
}


void matriz( int mat[100][100], int linhas, int colunas)
{
    for (int i = 0; i < linhas; i++)
    {
        /* code */
        for (int j = 0; j < colunas; j++)
        {
            /* code */
            if (i==j) mat[i][j] = j;
            else{
                mat[i][j] = 0;
            }
        }
        
    }
}


void ExibeMatriz( int mat[100][100], int linhas, int colunas)
{
    for (int i = 0; i < linhas; i++)
    {
        /* code */
        for (int j = 0; j < colunas; j++)
        {
            /* code */
            cout << mat[i][j];
        }
        cout << endl;
    }
}
