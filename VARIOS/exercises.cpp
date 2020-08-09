#include <iostream>


using namespace std;

int main()
{
    int num = 10;

    cout << "Número" << "\t" << "Quadrado" << "\t" << "Cubo" << "\n";

    for (int i = 0; i <= num; i++)
    {
        /* code */
        cout << i << "\t" << i*i << "\t" << i*i*i << "\n";
    }
    

    return 0;
}