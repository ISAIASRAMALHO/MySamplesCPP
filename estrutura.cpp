#include <iostream>


using namespace std;


struct Endereco
{
    string tipo, Logradouro, num, complemento, cep, cidade, uf, pais;

    void setarEndereco( string vt_end[8] )
    {
        tipo = vt_end[0];
        Logradouro = vt_end[1];
        num = vt_end[2];
        complemento = vt_end[3];
        cep = vt_end[4];
        cidade = vt_end[5];
        uf = vt_end[6];
        pais = vt_end[7];
    }

    void mostrarEndereco()
    {
        cout << "Endereço: " << tipo << " " << Logradouro << "n. " << num << endl;
        cout << "Complemento: " << complemento << " CEP: " << cep << endl;
        cout << " Cidade: " << cidade << " Estado: " << uf << " País: " << pais << endl;  
    }

};

struct Casa
{
    /* data */
    int lf, lr, front, back;
    Endereco endereco;

    void Entrar()
    {
        cout << "\nEntrando na casa que fica no endereço " << endl;
        endereco.mostrarEndereco();
    }

    void DefineEndereco( string address )
    {
        endereco.Logradouro = address;
    }
};


int main()
{
    Casa minhaCasa;

    minhaCasa.DefineEndereco("Avenida Jose Elias Correis, 740. Bairro Nova Parnaiba - Parnaíba-PI");
    minhaCasa.endereco.mostrarEndereco();


    return 0;
}