#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
/*
Calculando o Primeiro Dígito Verificador
O primeiro dígito verificador do CPF é calculado baseando-se no seguinte algoritmo.

1) Distribua os 9 primeiros dígitos do CPF na primeira linha de uma tabela, e na linha abaixo distribua os pesos 10, 9, 8, 7, 6, 5, 4, 3, 2 
conforme representação abaixo:

1	2	3	4	5	6	7	8	9
10	9	8	7	6	5	4	3	2
2) Multiplique os valores de cada coluna:

1	2	3	4	5	6	7	8	9
10	9	8	7	6	5	4	3	2
10	18	24	28	30	30	28	24	18
3) Calcule a somatória dos resultados (10+18+…+24+18) = 210

4) O resultado obtido (210) será divido por 11. Considere como quociente apenas o valor inteiro obtido na divisão, o resto da divisão será 
responsável pelo cálculo do primeiro dígito verificador.

O resto da divisão é 1. Para calcular o dígito verificador, você deve subtrair o resto encontrado de onze.

11 – 1 = 10

Se o resultado da subtração for maior que 9, o dígito verificador é ZERO. Caso contrário, o dígito verificador é o resultado dessa subtração. 
Neste caso, o primeiro dígito verificador é ZERO.

Já temos portanto parte do CPF válido, confira: 123.456.789-0X.

Calculando o Segundo Dígito Verificador
1) Para calcular o segundo dígito verificador, fazemos o cálculo de forma análoga ao primeiro dígito, acrescentando ao CPF o dígito encontrado 
no passo anterior. Na segunda linha, os pesos são distribuídos começando por 11.

1	2	3	4	5	6	7	8	9	0
11	10	9	8	7	6	5	4	3	2
11	20	27	32	35	36	35	32	27	0
2) Faça a somatória da multiplicação das colunas: (11+20+…+27+0) = 255

3) Encontre o resto da divisão da somatória por 11.

O resto da divisão é 2. Para calcular o dígito verificador, você deve subtrair o resto encontrado de onze.

11 – 2 = 9

Como agora o resultado da subtração não é maior que 9, o resultado é o próprio dígito verificador.

Agora já sabemos quais são os dois dígitos verificadores válidos, 0 e 9, podemos afirmar que o CPF hipotético usado no exemplo não é válido.

123.456.789-10 (CPF inválido)

123.456.789-09 (CPF válido)


Como verificar se um CNPJ é válido?
O CNPJ é composto por quatorze algarismos, divididos em três blocos:

 

– o primeiro, que representa o número da inscrição propriamente dito;

– o segundo, localizado após a barra, que representa um código único para a matrix ou filial;

– o terceiro, representados pelos dois últimos valores chamados de dígitos verificadores (DV).

 

Os dígitos verificadores (DV) são criados a partir dos doze primeiros. O cálculo é feito em duas etapas utilizando o módulo de divisão 11.

Para exemplificar o processo e tornar mais fácil a explicação vamos calcular os dígitos verificadores de um CNPJ hipotético, por exemplo, 
11.444.777/0001-XX.

 

Calculando o Primeiro Dígito Verificador
O primeiro dígito é calculado utilizando-se o seguinte algoritmo.

 

1) Distribua os 12 primeiros dígitos em um quadro colocando os pesos 5,4,3,2,9,8,7,6,5,4,3,2 abaixo da esquerda para a direita, conforme 
representação abaixo:

1	1	4	4	4	7	7	7	0	0	0	1
5	4	3	2	9	8	7	6	5	4	3	2
 

2) Multiplique os valores de cada coluna:

1	1	4	4	4	7	7	7	0	0	0	1
5	4	3	2	9	8	7	6	5	4	3	2
5	4	12	8	36	56	49	42	0	0	0	2
 

3) Calcule o somatório dos resultados (5+4+…+0+2) = 214

 

4) O resultado obtido (214) será divido por 11. Considere como quociente apenas o valor inteiro, o resto da divisão será responsável 
pelo cálculo do primeiro dígito verificador.

Vamos acompanhar: 214 dividido por 11 obtemos 19 como quociente e 5 como resto da divisão. Caso o resto da divisão seja menor que 2, 
o nosso primeiro dígito verificador se torna 0 (zero), caso contrário subtrai-se o valor obtido de 11, que é nosso caso. Sendo assim 
nosso dígito verificador é 11-5, ou seja, 6 (seis). Já temos portanto parte do CNPJ, confira: 11.444.777/0001-6X.

Calculando o Segundo Dígito Verificador
1) Para o cálculo do segundo dígito será usado o primeiro dígito verificador já calculado. Montaremos uma tabela semelhante a anterior 
só que desta vez usaremos na segunda linha os valores 6,5,4,3,2,9,8,7,6,5,4,3,2 já que estamos incorporando mais um algarismo para esse cálculo.
 Veja:

1	1	4	4	4	7	7	7	0	0	0	1	6
6	5	4	3	2	9	8	7	6	5	4	3	2
 

2) Na próxima etapa faremos como na situação do cálculo do primeiro dígito verificador, multiplicaremos os valores de cada coluna e efetuaremos 
o somatório dos resultados obtidos: (6+5+…+3+12) = 221.

1	1	4	4	4	7	7	7	0	0	0	1	6
6	5	4	3	2	9	8	7	6	5	4	3	2
6	5	16	12	8	63	56	49	0	0	0	3	12
 

3) Realizamos novamente o cálculo do módulo 11. Dividimos o total do somatório por 11 e consideramos o resto da divisão.

Vamos acompanhar: 230 dividido por 11 obtemos 20 como quociente e 10 como resto da divisão.

 

4) Caso o valor do resto da divisão seja menor que 2, esse valor passa automaticamente a ser zero, caso contrário (como no nosso exemplo) é 
necessário subtrair o valor obtido de 11 para se obter o dígito verificador, como realizado no cálculo do primeiro dígito. Logo, 11-10 = 1 é 
o nosso segundo dígito verificador.

 

Chegamos ao final dos cálculos e descobrimos que os dígitos verificadores do nosso CNPJ hipotético são os números 6 e 1, portanto o CNPJ 
ficaria assim: 11.444.777/0001-61.


*/


const int pesoCPF[10] = {11, 10, 9, 8, 7, 6, 5, 4, 3, 2};
const int pesoCNPJ[13] = {6, 5, 4, 3, 2, 9, 8, 7, 6, 5, 4, 3, 2};

using namespace std;

bool ValidarCPF(string ncpf);
bool ValidarCNPJ(string ncnpj);
string Mascara( string campo, string formato);

int main()
{
    string campo;

    cout << "Informe um CPF/CNPJ válido: ";
    cin >> campo;
    if (campo.length() >=12)
    {
        /* code */
        if ( ValidarCNPJ( campo ) )
        {
            /* code */
            cout << "\n\nCNPJ valido" << endl;
        }else
        {
            /* code */
            cout << "\n\nCNPJ inválido" << endl;
        }
    }else
    {
        if ( ValidarCPF( campo ) )
        {
            /* code */
            cout << "\n\nCPF valido" << endl;
        }else
        {
            /* code */
            cout << "\n\nCPF inválido" << endl;
        }

    }
    
    


    return 0;
}


bool ValidarCPF( string ncpf)
{
    int acumula = 0;
    string stn1, stnum, stnum2;
    int resto, digito1, digito2;

    // CALCULANDO PRIMEIRO DIGITO VERIFICADOR.
    for (int i = 1; i < 10; i++)
    {
        /* code */
        stnum = ncpf[i-1];
        acumula  += std::stoi( stnum ) * pesoCPF[i];
    }
    resto = acumula % 11;
    digito1 = 11 - resto;
    if (digito1 > 9)
    {
        digito1 = 0;
    }

    // CALCULANDO O SEGUNDO DIGITO VERIFICADOR.
    acumula = 0;
    for (int i = 0; i < 9; i++)
    {
        /* code */
        stnum = ncpf[i];
        acumula  += std::stoi( stnum ) * pesoCPF[i];
    }
    acumula += digito1 * pesoCPF[9];
    resto = acumula % 11;
    digito2 = 11 - resto;
    if (digito2 > 9)
    {
        digito2 = 0;
    }
    // AGORA VAMOS COMPARAR OS ÚLTIMOS DOIS DIGITOS INFORMADOS PELO
    // USUARIO COM OS OS DIGITOS CALCULADOS
    stnum = ncpf[9];
    stn1 = ncpf[10];    
    return ( (digito1 == std::stoi(stnum) ) && ( digito2 == std::stoi(stn1) ) );
}


bool ValidarCNPJ( string ncnpj)
{
    int acumula = 0;
    string stn1, stnum, stnum2;
    int resto, digito1, digito2;

    // CALCULANDO PRIMEIRO DIGITO VERIFICADOR.
    cout << "*** CALCULANDO PRIMEIRO DIGITO VERIFICADOR ***\n\n";
    for (int i = 1; i < 13; i++)
    {
        /* code */
        stnum = ncnpj[i-1];
        acumula  += std::stoi( stnum ) * pesoCNPJ[i];
        // cout << "\nOrdem: " << i << " Digito CNPJ: " << stnum << " x " << pesoCNPJ[i] << " = " << ( std::stoi(stnum) * pesoCNPJ[i]) << " acumulando: " << acumula;
    }
    resto = acumula % 11;
    if (resto < 2)
    {
        digito1 = 0;
    }else
    {
        /* code */
        digito1 = 11 - resto;
    }

    // cout << "\n\nPrimeiro digito verificador: " << digito1 << endl;
    

    // CALCULANDO O SEGUNDO DIGITO VERIFICADOR.
    cout << "\n\n*** CALCULANDO SEGUNDO DIGITO VERIFICADOR ***\n\n";
    acumula = 0;
    for (int i = 0; i < 12; i++)
    {
        /* code */
        stnum = ncnpj[i];
        acumula  += std::stoi( stnum ) * pesoCNPJ[i];
        // cout << "\nOrdem: " << i << " Digito CNPJ: " << stnum << " x " << pesoCNPJ[i] << " = " << ( std::stoi(stnum) * pesoCNPJ[i]) << " acumulando: " << acumula;
    }
    acumula += digito1 * pesoCNPJ[12];
    cout << "\nAcumulando: " << acumula;
    resto = acumula % 11;
    //digito2 = 11 - resto;
    if ( resto < 2)
    {
        digito2 = 0;
    }else
    {
        /* code */
        digito2 = 11 - resto;
    }
    
    // AGORA VAMOS COMPARAR OS ÚLTIMOS DOIS DIGITOS INFORMADOS PELO
    // USUARIO COM OS OS DIGITOS CALCULADOS
    stnum = ncnpj[12];
    stn1 = ncnpj[13];    
    return ( (digito1 == std::stoi(stnum) ) && ( digito2 == std::stoi(stn1) ) );
}


string Mascara( string campo, string formato)
{
    // SUBSTITUIR OS 9 NOVES DA MASCARA PELOS DIGITOS DO CAMPO.
    // EXEMPLO MASCARA 999.999.999-99. CAMPO 68609205304 = 686.092.053-04.
    string palavra;
    //const char letra = "9";
    for (int i = 0; i <= campo.length(); i++)
    {
        /* code */
        if ( formato[i] == '9')
        {
            palavra += campo[i];
        }else
        {
            /* code */
            palavra +=formato[i];
        }
        
    }
    
    return palavra;
}