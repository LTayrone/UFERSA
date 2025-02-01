#include <iostream>
#include "binario.h"
#include  "genetico.h"
#include <bitset>

using namespace std;

string passou(bool status) {
    return status ? "\033[32mOK\033[0m" : "\033[31mX\033[0m";
}


int main()
{
    // Leitura dos dados de Entrada
    uint16_t num1, num2, num3, num4, num5, num6;

	cout << " Entre com 6 soluções iniciais (números entre 0 e 65535): " << endl;
    cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6;


    // Impressao da Funcao de Avaliacao de Resultados, nos valores iniciais
    cout << "Resultado da Avaliação" << endl;
    cout << "-----------------------" << endl;

    bool sol1 = funcAvaliacao(num1);
    cout << passou(sol1) << endl;

    bool sol2 = funcAvaliacao(num2);
    cout << passou(sol2) << endl;

    bool sol3 = funcAvaliacao(num3);
    cout << passou(sol3) << endl;

    bool sol4 = funcAvaliacao(num4);
    cout << passou(sol4) << endl;

    bool sol5 = funcAvaliacao(num5);
    cout << passou(sol5) << endl;

    bool sol6 = funcAvaliacao(num6);
    cout << passou(sol6) << endl;

    cout << "-----------------------" << endl;

    // Impressao apos utilizacao dos cruzamentos e mutacoes do alg genetico
    bool sol7 = funcAvaliacao(cruzamentoPontoUnico(num1,num2));
    cout << passou(sol1) << endl;

    bool sol8 = funcAvaliacao(cruzamentoAritmetico(num3, num4));
    cout << passou(sol2) << endl;

    bool sol9 = funcAvaliacao(mutacaoSimples(num5));
    cout << passou(sol3) << endl;

    bool sol10 = funcAvaliacao(mutacaoDupla(num6));
    cout << passou(sol4) << endl;


    return 0;

}