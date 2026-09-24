# 🧮 Conversor de Bases Numéricas em C++

Este é um projeto simples e eficiente de um **Conversor de Bases Numéricas** desenvolvido puramente em **C++**. O programa permite converter valores entre as bases Decimal, Binária e Hexadecimal nos dois sentidos.

O grande diferencial deste código é que ele foi construído **do zero**, utilizando apenas lógica de programação pura (`if/else`, `loops` e manipulação de `strings`), sem depender de funções prontas de conversão de bibliotecas avançadas. É um excelente exemplo de lógica de programação aplicada à matemática computacional!

## 🚀 Funcionalidades

O programa executa as seguintes conversões em uma única rodada:
1. **Decimal para Binário:** Utiliza o método de divisões sucessivas por 2.
2. **Decimal para Hexadecimal:** Divide sucessivamente por 16 e faz o mapeamento manual dos restos de 10 a 15 para as letras de `A` a `F`.
3. **Binário para Decimal:** Varre a string de trás para frente multiplicando os bits por potências de 2.
4. **Hexadecimal para Decimal:** Processa os caracteres textuais mapeando letras e números de volta para valores decimais baseados em potências de 16.

## 🛠️ Tecnologias Utilizadas

* **Linguagem:** C++
* **Fluxo de Saída:** `std::cout` e `std::endl`
* **Estruturas:** `if`, `else if`, `while`, `for`

## 💻 Como Rodar o Projeto

1. Certifique-se de ter um compilador de C++ instalado (como o GCC) ou utilize uma IDE/Compilador Online (como o GDB Online).
2. Clone o repositório ou copie o código do arquivo `conversor.cpp`.
3. Compile o arquivo:
   ```bash
   g++ conversor.cpp -o conversor
   ```
4. Execute o programa:
   ```bash
   ./conversor
   ```
5. Digite o número da opção desejada no menu principal e, em seguida, insira o valor a ser convertido.
