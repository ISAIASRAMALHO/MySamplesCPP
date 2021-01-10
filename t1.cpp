#include <iostream>
#include <string>

using namespace std;

void imprimialgo(string mensagem);

// int main( int argc, char *argv[])
int main()
{
  string texto;
    cout << "Digite algo: ";
    cin >> texto;
    imprimialgo( texto );
    return 0;
}

void imprimialgo(string mensagem)
{
    cout << mensagem << endl;
}