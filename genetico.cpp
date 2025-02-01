#include<iostream>
#include <bitset>
#include "binario.h"


bool funcAvaliacao(uint16_t numero)
{
    const int pesos[] = { 12, 3, 5, 4, 9, 1, 2, 3, 4, 1, 2, 4, 5, 2, 4, 1 };
    const int valores[] = { 4, 4, 8, 10, 15, 3, 1, 1, 2, 10, 20, 15, 10, 3, 4, 12 };
    constexpr int limitePeso = 20;

    int pesoTotal = 0, valorTotal = 0;

    for (int i = 0, index; i < 16; i++)
        if (testarBit(numero, index = 15 - i)) {
            pesoTotal += pesos[i];
            valorTotal += valores[i];
        }

    // Configuração do cout para espaçamento automático
    std::cout.fill(' '); // Define espaço como caractere de preenchimento
    std::cout.width(6);  // Garante largura mínima para alinhar números corretamente
    std::cout << numero << " - $";

    std::cout.width(2);
    std::cout << valorTotal << " - ";

    std::cout.width(2);
    std::cout << pesoTotal << "Kg - ";

    return pesoTotal <= limitePeso;
}



uint16_t cruzamentoPontoUnico(uint16_t num1, uint16_t num2)
{
    uint16_t parteAlta = num1 & 0xFF00; // Obtém os 8 bits mais significativos de num1
    uint16_t parteBaixa = num2 & 0x00FF; // Obtém os 8 bits menos significativos de num2

    return (parteAlta | parteBaixa); // Junta os bits superiores de num1 com os inferiores de num2
}


uint16_t cruzamentoAritmetico(uint16_t num1, uint16_t num2)
{
	return andBinario(num1, num2);
}


uint16_t mutacaoSimples(uint16_t num) {
    //int pos = rand() % 16; // Escolhe um bit aleatório para modificar
    int pos = 9;

    if (testarBit(num, pos)) { // Se o bit estiver ligado (1)
        return desligarBit(num, pos); // Desliga o bit
    }
    else { // Se o bit estiver desligado (0)
        return ligarBit(num, pos); // Liga o bit
    }
}


uint16_t mutacaoDupla(uint16_t num)
{

    int pos1 = 12;
	int pos2 = 3;

    // Aplica mutação na primeira posição
    if (testarBit(num, pos1))
    {
        num = desligarBit(num, pos1);
    }
    else
    {
        num = ligarBit(num, pos1);
    }

    // Aplica mutação na segunda posição
    if (testarBit(num, pos2))
    {
        num = desligarBit(num, pos2);
    }
    else
    {
        num = ligarBit(num, pos2);
    }

    return num;
}