#ifndef BINARIO_H
#define BINARIO_H

#include <cstdint>

// Fun��o para ligar um bit espec�fico
uint16_t ligarBit(uint16_t numero, int posicao);

// Fun��o para desligar um bit espec�fico
uint16_t desligarBit(uint16_t numero, int posicao);

// Fun��o para testar se um bit est� ligado
bool testarBit(uint16_t numero, int posicao);

// Opera��o AND bit a bit entre dois n�meros
uint16_t andBinario(uint16_t numero_01, uint16_t numero_02);

// Opera��o OR bit a bit entre dois n�meros
uint16_t orBinario(uint16_t numero_01, uint16_t numero_02);

// Retorna os 8 bits menos significativos de um n�mero
uint16_t bitsBaixos(uint16_t numero);

// Retorna os 8 bits mais significativos de um n�mero
uint16_t bitsAltos(uint16_t numero);

#endif // BINARIO_H