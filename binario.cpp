/*
 *	Autor: Lucas Tayrone Moreira Ribeiro
 *	Data: 28/01/2025
 *
 */

#include <cstdint>

uint16_t ligarBit(uint16_t numero, int posicao)
{
	uint16_t mascara = 1 << posicao;
	uint16_t resultado = numero | mascara;

	return resultado;
}

uint16_t desligarBit(uint16_t numero, int posicao)
{
	uint16_t mascara = ~(1 << posicao);
	uint16_t resultado = numero & mascara;

	return resultado;
}

bool testarBit(uint16_t numero, int posicao)
{
	uint16_t mascara = 1 << posicao;
	return (numero & mascara) != 0;
}


uint16_t andBinario(uint16_t numero_01, uint16_t numero_02)
{
	return (numero_01 & numero_02);
}

uint16_t orBinario(uint16_t numero_01, uint16_t numero_02)
{
	return (numero_01 | numero_02);
}

uint16_t bitsBaixos(uint16_t numero)
{
	uint16_t mascara = 0xFF;
	return (numero & mascara);
}

uint16_t bitsAltos(uint16_t numero)
{
	return (numero >> 8);
}

