#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> vetor_msg {"Hello", "C++", "World", "from", "VS Code!"};

    for (const string& palavra : vetor_msg)
    {
        /* code */
        cout << palavra << " ";
    }
    
    cout << "\n\nSucesso na programação é viver da programação. E viver muito bem" << endl;

    return 0;
}