#include <iostream>
#include <string>

using namespace std;


void gerarfonte(int qual);

int main(int argc, char *argv[])
{
    int n1;

    cout << "\nDigite um valor entre 0 e 10: ";
    cin >> n1; 

    gerarfonte( n1 );  

    return 0;
}


void gerarfonte( int qual)
{
    /*
        QUANTIDADE DE LETRAS DO ALFABETO ABCDEFGHIJKLMNOPQRSTUYVXWZ = 26
        CRIAR UM VETOR COM 26 LINHAS 

        string alfabeto(25,11);


        EXEMPLO:

                A =  alfabeto(0,0) =  ****************
                     alfabeto(0,2 =  *              *
                     alfabeto(0,3) =  *              *
                     alfabeto(0,4) =  *              *
                     alfabeto(0,5) =  *              *
                     alfabeto(0,6) =  ****************
                     alfabeto(0,7) =  *              *
                     alfabeto(0,8) =  *              *
                     alfabeto(0,9) =  *              *
                     alfabeto(0,0) =  *              *
                     alfabeto(0,1) =  *              *

    */

   string NovaFonte[25][11];

    NovaFonte[0][0] = "****************";
    NovaFonte[0][1] = "*              *";
    NovaFonte[0][2] = "*              *";
    NovaFonte[0][3] = "*              *";
    NovaFonte[0][4] = "*              *";
    NovaFonte[0][5] = "****************";
    NovaFonte[0][6] = "*              *";
    NovaFonte[0][7] = "*              *";
    NovaFonte[0][8] = "*              *";
    NovaFonte[0][9] = "*              *";
    NovaFonte[0][10] = "*              *";

    NovaFonte[1][0] = "*************** ";
    NovaFonte[1][1] = "*              *";
    NovaFonte[1][2] = "*              *";
    NovaFonte[1][3] = "*              *";
    NovaFonte[1][4] = "*              *";
    NovaFonte[1][5] = "*************** ";
    NovaFonte[1][6] = "*              *";
    NovaFonte[1][7] = "*              *";
    NovaFonte[1][8] = "*              *";
    NovaFonte[1][9] = "*              *";
    NovaFonte[1][10] = "*************** ";

    NovaFonte[2][0] = "****************";
    NovaFonte[2][1] = "*               ";
    NovaFonte[2][2] = "*               ";
    NovaFonte[2][3] = "*               ";
    NovaFonte[2][4] = "*               ";
    NovaFonte[2][5] = "*               ";
    NovaFonte[2][6] = "*               ";
    NovaFonte[2][7] = "*               ";
    NovaFonte[2][8] = "*               ";
    NovaFonte[2][9] = "*               ";
    NovaFonte[2][10] = "****************";

    NovaFonte[3][0] = "-------------- ";
    NovaFonte[3][1] = "I              I";
    NovaFonte[3][2] = "I              I";
    NovaFonte[3][3] = "I              I";
    NovaFonte[3][4] = "I              I";
    NovaFonte[3][5] = "I              I";
    NovaFonte[3][6] = "I              I";
    NovaFonte[3][7] = "I              I";
    NovaFonte[3][8] = "I              I";
    NovaFonte[3][9] = "I              I";
    NovaFonte[3][10] = "------------- ";

    NovaFonte[4][0] = "****************";
    NovaFonte[4][1] = "*               ";
    NovaFonte[4][2] = "*               ";
    NovaFonte[4][3] = "*               ";
    NovaFonte[4][4] = "*               ";
    NovaFonte[4][5] = "****************";
    NovaFonte[4][6] = "*               ";
    NovaFonte[4][7] = "*               ";
    NovaFonte[4][8] = "*               ";
    NovaFonte[4][9] = "*               ";
    NovaFonte[4][10] = "****************";



    for (int i = 0; i < 11; i++)
    {
        /* code */
        cout << NovaFonte[ qual ][i] << endl;
    }
    


}