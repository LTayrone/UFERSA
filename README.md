Problema da Mochila com Algoritmos Genéticos 🎒🧬✨

Descrição do Projeto 🚀📝💡

Este projeto implementa uma solução para o Problema da Mochila utilizando partes de Algoritmos Genéticos. O objetivo é selecionar itens que maximizem o valor total sem exceder um limite de peso. O problema é resolvido utilizando operações de cruzamento e mutação genética.

Estrutura do Projeto 📁🔧🖥️

main.cpp: Arquivo principal que gerencia a entrada e a saída dos dados.

binario.h / binario.cpp: Funções para manipulação de bits.

genetico.h / genetico.cpp: Implementa os operadores genéticos e a função de avaliação.

TP1.pdf: Documento com a descrição do problema e as regras de implementação.

Funcionalidades Implementadas 🛠️⚙️📌

Função de Avaliação: Verifica se uma solução é válida e calcula seu valor total.

Cruzamento Genético:

Ponto Único: Combina bits de duas soluções.

Aritmético (AND): Cria uma nova solução baseada na operação AND bit a bit.

Mutação:

Simples: Altera um bit da solução.

Dupla: Altera dois bits da solução.

Manipulação de Bits:

Ligar, desligar e testar bits.

Operadores AND e OR bit a bit.

Extração de bits altos e baixos.

Como Executar ▶️🖥️⚡

Compile o projeto com um compilador g++:

g++ main.cpp binario.cpp genetico.cpp -o mochila

Execute o programa:

./mochila

Insira seis valores inteiros entre 0 e 65535 conforme solicitado.

O programa exibira as soluções iniciais, novas soluções geradas e os resultados da avaliação.

Exemplo de Saída 📊📜✅

Entre com 6 soluções iniciais (números entre 0 e 65535):
60504 25000 12329 38054 1259 732

Resultado da Avaliação
-----------------------
60504 - $69 - 40Kg - X
25000 - $45 - 22Kg - X
12329 - $60 - 17Kg - OK
38054 - $46 - 29Kg - X
1259  - $61 - 18Kg - OK
732   - $41 - 18Kg - OK
-----------------------
Nova geração de soluções...
...

Autor ✍️👨‍💻📚

Lucas Tayrone Moreira Ribeiro

Licença 📜🔓✅

Este projeto é distribuído sob a licença MIT.

