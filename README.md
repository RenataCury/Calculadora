# Calculadora Simples em Linguagem C

Este é um projeto de calculadora simples desenvolvido como parte de um exercício acadêmico durante o curso de graduação.

## Funcionalidades

- Soma: Adiciona dois números.
- Subtração: Subtrai o segundo número do primeiro.
- Multiplicação: Multiplica dois números.
- Divisão: Divide o primeiro número pelo segundo.

## Como Compilar e Executar

1. Clone este repositório em sua máquina local.
2. Abra o terminal e navegue até o diretório do projeto.
3. Compile o arquivo `calculadora.c` usando um compilador de C, como GCC:

   ```
   gcc calculadora.c -o calculadora
   ```
4. Execute o programa gerado:

   ```
   ./calculadora
   ```
5. Siga as instruções na linha de comando para realizar as operações desejadas.

## Exemplo de Uso

```c
#include <stdio.h>
#include "calculadora.h"

int main() {
    float num1 = 10, num2 = 5;
    float resultado_soma, resultado_subtracao, resultado_multiplicacao, resultado_divisao;

    resultado_soma = soma(num1, num2);
    resultado_subtracao = subtrai(num1, num2);
    resultado_multiplicacao = multiplica(num1, num2);
    resultado_divisao = divide(num1, num2);

    printf("Soma: %.2f\n", resultado_soma);
    printf("Subtracao: %.2f\n", resultado_subtracao);
    printf("Multiplicacao: %.2f\n", resultado_multiplicacao);
    printf("Divisao: %.2f\n", resultado_divisao);

    return 0;
}
```

## Contribuição

Contribuições são bem-vindas! Sinta-se à vontade para abrir uma issue para reportar bugs ou propor novas funcionalidades.
